/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889010; name: FUN_00889010
 */


undefined2 FUN_00889010(undefined4 param_1)

{
  ulong uVar1;
  undefined2 local_14 [2];
  
  uVar1 = FUN_00887fd0(*(undefined8 *)PTR_DAT_02717468,3,param_1,local_14);
  if ((uVar1 & 1) == 0) {
    local_14[0] = 0;
  }
  return local_14[0];
}


