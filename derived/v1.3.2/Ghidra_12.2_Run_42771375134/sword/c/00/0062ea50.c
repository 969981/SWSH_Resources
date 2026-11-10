/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062ea50; name: FUN_0062ea50
 */


void FUN_0062ea50(long *param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ushort local_48 [2];
  ushort local_44 [2];
  short local_38 [2];
  short local_34 [2];
  
  lVar6 = param_1[6];
  lVar7 = *param_1;
  local_34[0] = 0;
  local_38[0] = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  uVar5 = FUN_00607fe0(lVar6);
  (**(code **)(*(long *)(lVar7 + 0x370) + 0xe0))(lVar7,0,param_2,local_34,local_44);
  if (*(char *)(lVar7 + 0x1f0) == '\0') {
    if (*(short *)(lVar7 + 0x268) == -1) {
      sVar1 = *(short *)(lVar7 + 0x198);
      local_38[0] = sVar1 - (short)param_1[0xb];
      sVar2 = *(short *)(lVar7 + 0x19a);
    }
    else {
      sVar1 = *(short *)(lVar7 + 0x2c2);
      local_38[0] = sVar1 - (short)param_1[0xb];
      sVar2 = *(short *)(lVar7 + 0x2c4);
    }
    iVar3 = (int)sVar1 - (int)sVar2;
    iVar4 = -iVar3;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    local_48[0] = (ushort)iVar4;
    iVar4 = FUN_006069e0(lVar6,uVar5);
  }
  else {
    (**(code **)(*(long *)(lVar7 + 0x370) + 0xe0))(lVar7,1,param_2,local_38,local_48);
    iVar4 = FUN_006069e0(lVar6,uVar5);
  }
  if (iVar4 == 0) {
    *(int *)(param_1 + 0xc) = (int)local_34[0];
    *(uint *)((long)param_1 + 100) = (uint)local_44[0];
    *(int *)(param_1 + 0x26) = (int)local_38[0];
    *(uint *)((long)param_1 + 0x134) = (uint)local_48[0];
    if (*(char *)((long)param_1 + 0x6c) == '\0') {
      *(undefined1 *)((long)param_1 + 0x6c) = 1;
      *(uint *)(param_1 + 0xd) = (uint)local_44[0];
    }
  }
  return;
}


