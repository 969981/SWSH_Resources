/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc8280; name: FUN_00bc8280
 */


undefined8 FUN_00bc8280(undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_3 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(char *)(param_3 + 0x693) == '\x04') {
    local_38 = *(undefined8 *)(param_3 + 0x6a0);
    FUN_0167b630(lVar5,param_3 + 0x698,&local_38);
    local_38 = *(undefined8 *)(param_3 + 0x6b8);
    FUN_0167b630(lVar5,param_3 + 0x6b0,&local_38);
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar6 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    puVar2 = PTR_DAT_02710798;
    lVar4 = *(long *)PTR_DAT_02710798;
    lVar7 = *(long *)(lVar4 + 0x228);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(lVar4 + 0x220);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN_01506e20(lVar4,*(undefined1 *)(param_3 + 0x691),*(undefined1 *)(param_3 + 0x692),
                 *(undefined8 *)(param_3 + 8));
    FUN_01509bd0(lVar7,*(undefined1 *)(param_3 + 0x691),*(undefined1 *)(param_3 + 0x692));
    uVar3 = FUN_0150b350(lVar7);
    bVar1 = *(byte *)(param_3 + 0x691);
    if (uVar3 == bVar1) {
      FUN_0150b270(lVar7,*(undefined1 *)(param_3 + 0x692));
      bVar1 = *(byte *)(param_3 + 0x691);
    }
    *(undefined1 *)(param_3 + 0x690) = *(undefined1 *)(param_3 + 0x692);
    FUN_00bc6b50(param_3,bVar1);
    FUN_00bc6b50(param_3,*(undefined1 *)(param_3 + 0x692));
    FUN_00bc7650(param_3,*(undefined1 *)(param_3 + 0x691),1);
    FUN_00bc7770(param_3,1);
    FUN_00bc78a0(param_3,0);
    FUN_00bb48a0(param_3);
    local_38 = FUN_016b8190();
    FUN_00bb94c0(param_3,&local_38);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar8 = 1;
  }
  else {
    fVar9 = (float)FUN_0167b720(lVar5,param_3 + 0x698);
    local_38 = CONCAT44(param_2 + *(float *)(param_3 + 0x6ac),fVar9 + *(float *)(param_3 + 0x6a8));
    FUN_0167b630(lVar5,param_3 + 0x698,&local_38);
    fVar9 = (float)FUN_0167b720(lVar5,param_3 + 0x6b0);
    local_38 = CONCAT44(param_2 + *(float *)(param_3 + 0x6c4),fVar9 + *(float *)(param_3 + 0x6c0));
    FUN_0167b630(lVar5,param_3 + 0x6b0,&local_38);
    uVar8 = 0;
    *(char *)(param_3 + 0x693) = *(char *)(param_3 + 0x693) + '\x01';
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar8;
}


