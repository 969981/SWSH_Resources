/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f9490; name: FUN_011f9490
 */


void FUN_011f9490(undefined8 param_1,int param_2)

{
  undefined8 local_68 [7];
  undefined8 local_30;
  
  FUN_011fa600(local_68);
  local_30 = 0x3c3f525f83ad503c;
  if (param_2 != 0x1f7) {
    local_30 = 0xa113cb7c25a44efb;
  }
  local_68[0] = 0x400000002;
  FUN_011fa930(*(undefined8 *)PTR_DAT_02710940,local_68,0);
  return;
}


