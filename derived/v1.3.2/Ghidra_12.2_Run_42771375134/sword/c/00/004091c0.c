/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004091c0; name: FUN_004091c0
 */


void FUN_004091c0(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 0xe) != 0) {
    return;
  }
  if (param_1[7] == 0) {
    if (0 < *param_2) {
      iStack_2c = param_2[1];
      local_48 = param_1 + 5;
      local_40 = 0x1000000;
      local_38 = 0x3f80000000000000;
      local_28 = 0x100;
      local_26 = 0;
      local_30 = *param_2;
      lVar3 = FUN_004bde40(*(undefined8 *)PTR_DAT_02712b18,&local_48,1,0);
      param_1[7] = lVar3;
      if (lVar3 == 0) {
        (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
      }
      else if (param_2[2] != 0) {
        uVar2 = 0;
        if (*(ushort *)PTR_DAT_02712ac0 != 0) {
          uVar2 = param_2[2] / (int)(uint)*(ushort *)PTR_DAT_02712ac0;
        }
        iVar1 = *(uint *)(lVar3 + 0x18) + uVar2;
        if (*(uint *)(lVar3 + 0x18) <= -uVar2 && 0x7fffffff < uVar2) {
          iVar1 = 0;
        }
        *(int *)(lVar3 + 0x18) = iVar1;
      }
    }
  }
  else {
    FUN_004be340(0x3f800000,*(undefined8 *)PTR_DAT_02712b18,param_1[7],0x1000000,*param_2,param_2[1]
                 ,0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}


