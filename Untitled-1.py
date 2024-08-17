# Removing the ground below the tree by cropping the image to remove the lower part
# and focusing on the tree itself.

# Define the area to crop (left, upper, right, lower)
# Here, I'm cropping the bottom part, assuming the ground is at the bottom.
width, height = image.size
crop_area = (0, 0, width, height - int(height * 0.15))  # Crop the bottom 15% of the image

# Crop the image
cropped_image = image.crop(crop_area)

# Save the cropped image to a new file
cropped_image_path = "/mnt/data/cropped_tree.png"
cropped_image.save(cropped_image_path)

# Display the cropped image
cropped_image.show()

cropped_image_path
