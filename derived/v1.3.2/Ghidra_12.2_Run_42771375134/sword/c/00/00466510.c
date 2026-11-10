/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466510; name: FUN_00466510
 */


undefined8 FUN_00466510(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar2 = (uint)*(ulong *)(param_1 + 0x28);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    local_40 = 0x3f80000000000000;
    local_38 = 0x39;
    uVar1 = FUN_004785a0(*(undefined8 *)PTR_DAT_02712dc0,param_1,0,param_3,param_4,&local_40);
    if ((uVar1 & 1) != 0) {
      FUN_004665f0(param_2,&local_40);
    }
    uVar2 = (uint)*(undefined8 *)(param_1 + 0x28);
  }
  if ((uVar2 >> 7 & 1) != 0) {
    local_40 = 0x3f80000000000000;
    local_38 = 0x39;
    uVar1 = FUN_004785a0(*(undefined8 *)PTR_DAT_02712dc0,param_1,7,param_3,param_4,&local_40);
    if ((uVar1 & 1) != 0) {
      FUN_004665f0(param_2,&local_40);
    }
  }
  return 1;
}


