/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a310; name: FUN_0041a310
 */


void FUN_0041a310(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_88;
  undefined1 local_80;
  long local_78;
  uint local_70;
  long *local_68;
  
  iVar3 = FUN_0041b310(param_1 + 0x60,param_2,param_3,&local_68);
  puVar2 = PTR_DAT_02712a90;
  do {
    if (iVar3 != 0x2d) {
      return;
    }
    lVar6 = local_68[2];
    iVar3 = (**(code **)(*local_68 + 0x10))();
    plVar5 = local_68;
    if (iVar3 == 1) {
      lVar7 = local_68[3];
      local_70 = local_70 & 0xffffff00;
      local_78 = local_68[4];
      iVar3 = (int)lVar6 - (int)param_2;
      plVar5 = &local_78;
LAB_0041a4c0:
      FUN_00409300(lVar7,plVar5,iVar3);
    }
    else if (iVar3 == 0) {
      lVar8 = local_68[3];
      iVar3 = (int)local_68[4];
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 != 0) {
        do {
          if ((((*(long *)(lVar6 + 0x80) == lVar8) && (*(int *)(lVar6 + 0x88) == iVar3)) &&
              ((*(byte *)(lVar6 + 0x5a) & 0xe) == 0)) &&
             (uVar4 = FUN_004096a0(lVar6), (uVar4 & 1) == 0)) goto LAB_0041a4c4;
          lVar6 = *(long *)(lVar6 + 8);
        } while (lVar6 != 0);
        lVar8 = plVar5[3];
        iVar3 = (int)plVar5[4];
        for (lVar7 = *(long *)(param_1 + 0x30); lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
          if (((*(long *)(lVar7 + 0x80) == lVar8) && (*(int *)(lVar7 + 0x88) == iVar3)) &&
             ((*(byte *)(lVar7 + 0x5a) & 0xe) == 0)) goto LAB_0041a448;
        }
      }
      lVar7 = FUN_0041cc60(param_1,lVar8,iVar3);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x60);
        FUN_0041cef0(lVar7,*(undefined8 *)(lVar6 + 0x30),lVar6 + 0x18,*(undefined1 *)(lVar6 + 0x38))
        ;
LAB_0041a448:
        lVar6 = plVar5[6];
        iVar3 = FUN_0040eaa0(*(undefined8 *)(param_1 + 0x78));
        FUN_0041cf00(lVar7,iVar3 + (int)lVar6);
        local_78 = *(long *)((long)plVar5 + 0x24);
        local_70 = (int)plVar5[6] - (int)plVar5[2];
        FUN_004091c0(lVar7,&local_78);
        if ((*(byte *)(param_1 + 0x5a) >> 1 & 1) != 0) {
          local_88 = 0x400000000;
          local_80 = 0;
          iVar3 = *(int *)(param_1 + 0x54);
          plVar5 = &local_88;
          goto LAB_0041a4c0;
        }
      }
    }
LAB_0041a4c4:
    plVar5 = local_68;
    if (local_68 != (long *)0x0) {
      uVar1 = *(undefined4 *)puVar2;
      (**(code **)*local_68)(local_68);
      FUN_00404870(uVar1,plVar5);
    }
    iVar3 = FUN_0041b310(param_1 + 0x60,param_2 & 0xffffffff,param_3 & 0xffffffff,&local_68);
  } while( true );
}


