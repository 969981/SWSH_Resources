/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f8fe0; name: FUN_011f8fe0
 */


void FUN_011f8fe0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_68 [2];
  undefined1 auStack_58 [56];
  
  FUN_011fa600(local_68);
  local_68[0] = 0x200000002;
  FUN_017d0120(auStack_58,param_2);
  FUN_011fa930(*(undefined8 *)PTR_DAT_02710940,local_68,0);
  return;
}


