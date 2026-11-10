/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009015f0; name: FUN_009015f0
 */


undefined8 FUN_009015f0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if (*(int *)((long)param_1 + 0x1c) == 1) {
    uVar6 = (**(code **)(*(long *)param_1[2] + 0x2c0))();
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
    }
LAB_009016d8:
    uVar7 = 0;
  }
  else {
    if ((*(int *)((long)param_1 + 0x1c) == 0) &&
       (bVar3 = *(byte *)((long)param_1 + 0x1a), bVar3 < *(byte *)((long)param_1 + 0x19))) {
      uVar8 = 0xd;
      do {
        *(byte *)((long)param_1 + 0x1a) = bVar3 + 1;
        lVar5 = FUN_008df3d0(param_1[1],*(undefined1 *)(param_1 + 3));
        if ((((lVar5 != 0) && (uVar6 = FUN_008e1600(), (uVar6 & 1) == 0)) &&
            (uVar6 = FUN_008e1920(lVar5,0), (uVar6 & 1) == 0)) &&
           (uVar6 = FUN_008e1810(lVar5,3), (uVar6 & 1) == 0)) {
          bVar3 = FUN_008fa2d0(*param_1,lVar5);
          if (bVar3 != 0xff) {
            if (bVar3 < 0xdc) {
              if (bVar3 < 0xb4) goto LAB_009016a0;
              uVar8 = 0xb;
            }
            else {
              uVar8 = 0xc;
            }
          }
          uVar7 = *param_1;
          uVar2 = param_1[1];
          uVar4 = FUN_008e0a00(lVar5);
          uVar4 = FUN_008f9500(uVar7,uVar2,uVar4);
          (**(code **)(*(long *)param_1[2] + 0x2b8))((long *)param_1[2],uVar4,uVar8);
          iVar1 = *(int *)((long)param_1 + 0x1c) + 1;
          *(int *)((long)param_1 + 0x1c) = iVar1;
          if (iVar1 == 0) goto LAB_009016b8;
          goto LAB_009016d8;
        }
LAB_009016a0:
        bVar3 = *(byte *)((long)param_1 + 0x1a);
      } while (bVar3 < *(byte *)((long)param_1 + 0x19));
      if (*(int *)((long)param_1 + 0x1c) != 0) goto LAB_009016d8;
    }
LAB_009016b8:
    uVar7 = 1;
  }
  return uVar7;
}


