from PIL import Image

def image_to_bitmap(image_path, width=128, height=64):
    # Open the image file
    img = Image.open(image_path)
    
    # Resize the image to fit the display size (128x64)
    img = img.resize((width, height), Image.Resampling.LANCZOS)  # Updated to use Resampling.LANCZOS

    # Convert the image to grayscale
    img = img.convert("L")

    # Convert the grayscale image to monochrome (1-bit per pixel)
    # You can use a threshold value (127 is commonly used)
    threshold = 127
    img = img.point(lambda p: p > threshold and 255)  # Convert to white and black

    # Now, extract pixel data
    pixels = list(img.getdata())

    # Prepare the bitmap array (1 bit per pixel, so we need to pack 8 pixels into 1 byte)
    bitmap = []
    for y in range(height):
        row = 0
        for x in range(width):
            pixel = pixels[y * width + x]
            if pixel == 255:  # White pixel
                row |= (1 << (7 - (x % 8)))  # Set the corresponding bit
            if (x % 8 == 7):  # Every 8 pixels we need to append the byte
                bitmap.append(row)
                row = 0
        if width % 8 != 0:
            bitmap.append(row)  # For the last partial byte

    return bitmap


def print_bitmap(bitmap):
    """Helper function to print the bitmap array"""
    print("const uint8_t bitmap[] = {")
    for i, byte in enumerate(bitmap):
        print(f"  0x{byte:02X}", end=", ")
        if (i + 1) % 16 == 0:
            print()
    print("};")


if __name__ == "__main__":
    # Path to the image file
    image_path = "3411871.png"

    # Get the bitmap array for the image
    bitmap = image_to_bitmap(image_path)

    # Print out the C-style array for embedding in embedded systems
    print_bitmap(bitmap)
