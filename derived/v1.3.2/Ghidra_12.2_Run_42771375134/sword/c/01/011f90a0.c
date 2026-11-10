/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f90a0; name: FUN_011f90a0
 */


undefined8 FUN_011f90a0(undefined8 param_1,uint *param_2)

{
  undefined8 local_68;
  uint local_5c;
  
  if ((*param_2 & 0x3fffff) == 0x47a) {
    return 0;
  }
  FUN_011fa600(&local_68);
  local_68 = 0x100000003;
  local_5c = *param_2;
  FUN_011fa930(*(undefined8 *)PTR_DAT_02710940,&local_68,0);
  return 1;
}


