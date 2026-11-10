/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d4020; name: FUN_004d4020
 */


undefined8 FUN_004d4020(long param_1,undefined8 param_2,ulong param_3,ushort param_4,long *param_5)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  void *__s;
  undefined8 uVar7;
  size_t __n;
  undefined8 local_80;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [4];
  undefined1 auStack_44 [4];
  
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(long *)(param_1 + 0x78) = param_5[1];
  *(long *)(param_1 + 0x70) = *param_5;
  *(byte *)(param_1 + 0x344) = *(byte *)(param_1 + 0x344) & 0xfc | *param_5 == 0;
  *(ushort *)(param_1 + 0x80) = param_4;
  *(float *)(param_1 + 0x84) = 1.0 / (float)param_4;
  if (*param_5 != 0) {
    if ((param_5[1] == -1) ||
       (puVar4 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20),
       puVar4 == (undefined8 *)0x0)) {
      return 2;
    }
    lVar5 = FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x168);
    if (lVar5 != 0) {
      FUN_004c8f30(lVar5,puVar4,*param_5);
    }
    *(long *)(param_1 + 0x20) = lVar5;
    iVar1 = *(int *)(puVar4 + 10);
    *(int *)(puVar4 + 10) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar3 = *(undefined4 *)PTR_DAT_02712a90;
      (**(code **)*puVar4)(puVar4);
      FUN_00404870(uVar3,puVar4);
      lVar5 = *(long *)(param_1 + 0x20);
      puVar4 = (undefined8 *)PTR_DAT_02712d50;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
      puVar4 = (undefined8 *)PTR_DAT_02712d50;
    }
    if (lVar5 == 0) {
      PTR_DAT_02712d50 = (undefined *)puVar4;
      return 0x34;
    }
    uVar7 = *puVar4;
    PTR_DAT_02712d50 = (undefined *)puVar4;
    uVar3 = FUN_0044fc40();
    bVar2 = FUN_00457e30(uVar7,uVar3);
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfd | (bVar2 & 1) << 1;
    uVar7 = *puVar4;
    uVar3 = FUN_0044fc40(*(undefined8 *)(param_1 + 0x20));
    bVar2 = FUN_00457eb0(uVar7,uVar3);
    *(byte *)(param_1 + 0xb8) = (bVar2 & 0x1f) << 2 | *(byte *)(param_1 + 0xb8) & 0x83;
    *(long *)(*(long *)(param_1 + 0x20) + 0x158) = param_1;
    local_48[0] = 0;
    uVar7 = FUN_0044eaf0(0xbf800000,*(undefined8 *)(param_1 + 0x20),0,1,auStack_44,0,local_48);
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
    if ((int)uVar7 != 1) {
      return uVar7;
    }
    local_78 = 0xff00;
    local_80 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0x100000000;
    uStack_58 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x48))(*(long **)(param_1 + 0x20),&local_80,1);
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x148);
    (**(code **)(*plVar6 + 0x148))(plVar6,&local_80,*(long *)(param_1 + 0x20) + 0x50,1);
    FUN_0044f530(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x348) = 4;
  *(undefined8 *)(param_1 + 0x94) = 0x11;
  *(undefined8 *)(param_1 + 0x88) = 0;
  __n = (param_3 & 0xff) * 4 * (ulong)param_4;
  __s = (void *)FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,__n,0x10);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  return 0x34;
}


