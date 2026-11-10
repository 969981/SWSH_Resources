/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00638780; name: FUN_00638780
 */


undefined8 FUN_00638780(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  iVar1 = (int)*param_3;
  uVar5 = ((int)*param_2 + iVar1) - 1U & -iVar1;
  if (param_1[0x21] == 0) {
    if ((char)param_1[0x22] == '\0') {
      local_78 = param_4[2];
      local_90 = 0;
      local_60 = param_4[5];
      local_58 = param_4[6];
      local_50 = param_4[7];
      local_48 = param_4[8];
      local_40 = param_4[9];
      uStack_38 = param_4[10];
      local_80 = CONCAT44(iVar1,(int)param_4[1]);
      local_68 = CONCAT44((int)((ulong)param_4[4] >> 0x20),0x10000);
      local_88 = CONCAT44(uVar5,(int)*param_4);
      local_70 = param_4[3] & 0xffffffff00000000;
      uVar5 = *(uint *)((long)param_4 + 0x1c);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 >> 1 & 1) == 0) {
          if ((uVar5 >> 2 & 1) == 0) {
            return 0;
          }
          plVar2 = (long *)FUN_005fab70(param_1[4],&local_88,&local_90);
        }
        else {
          plVar2 = (long *)FUN_005faf50(param_1[4],&local_88,&local_90);
        }
      }
      else {
        plVar2 = (long *)FUN_005fad60(param_1[4],&local_88,&local_90);
      }
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((long *)param_1[0x21] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x21] + 0x18))();
        param_1[0x21] = 0;
      }
      param_1[0x21] = (long)plVar2;
      *(undefined1 *)((long)param_1 + 0x111) = 1;
      param_1[0x23] = local_90;
      uVar4 = (local_90 + *param_3) - 1U & -*param_3;
      goto LAB_006388ac;
    }
    plVar2 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    plVar2 = (long *)(**(code **)(*plVar2 + 0xf0))(plVar2,0,0);
    param_1[0x21] = (long)plVar2;
    local_68 = 0x100000000;
    local_60 = 0;
    local_80 = 0;
    local_88 = (ulong)uVar5;
    local_50 = 0;
    local_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    local_78 = (ulong)*(uint *)(param_4 + 3);
    local_70 = *(undefined8 *)((long)param_4 + 0x1c);
    local_48 = param_4[6];
    local_58 = (ulong)*(uint *)(param_4 + 5) << 0x20;
    uVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_88);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  lVar3 = (long)*(int *)(param_4 + 8);
  if (*(int *)(param_4 + 8) < 1) {
    uVar4 = FUN_00653070(param_1[0x21],(long)(int)uVar5,*param_3,param_1 + 0x23);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    *(undefined1 *)((long)param_1 + 0x111) = 1;
    lVar3 = param_1[0x23];
  }
  else {
    param_1[0x23] = lVar3;
  }
  uVar4 = (lVar3 + *param_3) - 1U & -*param_3;
LAB_006388ac:
  param_1[0x24] = uVar4;
  return 1;
}


