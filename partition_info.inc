###
### Start address of patition (decimal byte)
part_top_addr=12656640
###
###	  part = (name mount_point filesystem file size bErase)
###     - Currently, the available value is "name" and "size" field.
###     - Don't change field structure.
part=(
    "bsp        null  null  null    67108864  0"
    "boot       null  null  null     8458240  0"
    "recovery   null  null  null    20901888  0"
    "system     null  null  null  1925185536  0"
    "vendor     null  null  null   402653184  0"
    "userdata   null  null  null  4436525056  0"
    "cache      null  null  null   943718400  0"
    "metadata   null  null  null       32768  0"
    "misc       null  null  null        8192  0"
    "vbmeta     null  null  null       65536  0"
    "dtb        null  null  null      131072  0"
    "dtbo       null  null  null      131072  0"
)

