/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1bfb0; name: FUN_00a1bfb0
 */


void FUN_00a1bfb0(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 0x28))();
    if ((*(char *)(param_1 + 0x1c9) != '\x1f') &&
       (iVar3 = FUN_00a10750(*(undefined8 *)(param_1 + 400)), iVar3 == 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      FUN_00ffd510(0x40000000,uVar10,param_1 + 0x1d0);
      plVar5 = (long *)(**(code **)(param_1 + 0x20))(param_1 + 0x40);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x830))(plVar5,*(undefined1 *)(param_1 + 0x1c8));
        bVar1 = FUN_009141c0();
        if (bVar1 != 0) {
          uVar4 = 0;
          lVar9 = 0;
          do {
            lVar7 = FUN_00914330(uVar6,uVar4);
            cVar2 = FUN_008e0a00();
            uVar4 = uVar4 + 1;
            if (cVar2 != *(char *)(param_1 + 0x1c9)) {
              lVar7 = lVar9;
            }
            lVar9 = lVar7;
          } while (bVar1 != uVar4);
          if (lVar7 != 0) {
            local_56 = 0;
            local_58 = 0;
            local_78 = PTR_DAT_02718ea0 + 0x10;
            local_54 = 1;
            lStack_70 = lVar7;
            local_68 = lVar7;
            lStack_60 = lVar7;
            FUN_00a127a0(*(undefined8 *)(param_1 + 0x170),&local_78);
            uVar4 = FUN_00a0a570(lVar7);
            uVar8 = FUN_00a0a5f0();
            if ((uVar8 & 1) == 0) {
              lVar9 = *(long *)(param_1 + 0x1c0);
              bVar1 = *(byte *)(lVar9 + 0x58) & 0xfe;
            }
            else {
              FUN_00ffd510((float)uVar4,uVar10,param_1 + 0x1d8);
              lVar9 = *(long *)(param_1 + 0x1c0);
              bVar1 = *(byte *)(lVar9 + 0x58) | 1;
            }
            *(byte *)(lVar9 + 0x58) = bVar1;
          }
        }
      }
    }
  }
  return;
}


