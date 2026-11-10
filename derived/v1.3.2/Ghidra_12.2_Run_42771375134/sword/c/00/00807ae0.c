/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807ae0; name: FUN_00807ae0
 */


undefined8 FUN_00807ae0(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  string local_88 [16];
  void *local_78;
  string local_70 [16];
  void *local_60;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar1 = FUN_008021b0(lVar3,param_4);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  uVar2 = FUN_008088a0(param_1,&local_58);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar1 = (**(code **)(*param_3 + 600))(param_3,param_2,param_4,0);
      std::string::string(local_70,(string *)&local_58);
      uVar2 = FUN_008089c0(param_1,uVar1,local_70);
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
    }
    else {
      uVar1 = (**(code **)(*param_3 + 0x138))(param_3,param_2,param_4,0);
      std::string::string(local_88,(string *)&local_58);
      uVar2 = FUN_008089c0(param_1,uVar1,local_88);
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
    }
    if ((uVar2 & 1) != 0) {
      *(long *)(param_1 + 0x10) = lVar3;
      uVar1 = 1;
      goto joined_r0x00807ba0;
    }
  }
  uVar1 = 0;
joined_r0x00807ba0:
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return uVar1;
}


