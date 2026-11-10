/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ef1c0; name: FUN_012ef1c0
 */


void FUN_012ef1c0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (*(int *)(param_1 + 0x94) != 4) {
    plVar11 = *(long **)(param_1 + 8);
    puVar5 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,200,8);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    FUN_012fd4d0(puVar5);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    local_78 = puVar5;
    FUN_0075efb0(auStack_70,plVar11,0,1);
    *(undefined4 *)(local_78 + 0x18) = 5;
    FUN_0075f0a0(auStack_70);
    puVar1 = PTR_DAT_027185f8;
    lVar6 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0x3a0 + lVar6);
      if ((lVar12 != 0) && (uVar7 = FUN_0130fe50(lVar12), (uVar7 & 1) != 0)) {
        uVar13 = *(undefined8 *)puVar1;
        iVar10 = *(int *)(param_1 + 0x158);
        iVar3 = FUN_012e4e90(lVar12);
        if ((((((iVar10 != iVar3) ||
               (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x160)), cVar2 == -3)) &&
              ((iVar10 = *(int *)(param_1 + 0x170), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
               (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x178)), cVar2 == -3)))) &&
             ((iVar10 = *(int *)(param_1 + 0x188), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
              (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 400)), cVar2 == -3)))) &&
            ((((((iVar10 = *(int *)(param_1 + 0x1a0), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3
                 || (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x1a8)), cVar2 == -3)) &&
                ((iVar10 = *(int *)(param_1 + 0x1b8), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3
                 || (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x1c0)), cVar2 == -3))))
               && ((iVar10 = *(int *)(param_1 + 0x1d0), iVar3 = FUN_012e4e90(lVar12),
                   iVar10 != iVar3 ||
                   (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x1d8)), cVar2 == -3))))
              && ((iVar10 = *(int *)(param_1 + 0x1e8), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3
                  || (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x1f0)), cVar2 == -3))))
             && ((((iVar10 = *(int *)(param_1 + 0x200), iVar3 = FUN_012e4e90(lVar12),
                   iVar10 != iVar3 ||
                   (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x208)), cVar2 == -3)) &&
                  ((iVar10 = *(int *)(param_1 + 0x218), iVar3 = FUN_012e4e90(lVar12),
                   iVar10 != iVar3 ||
                   (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x220)), cVar2 == -3))))
                 && ((((iVar10 = *(int *)(param_1 + 0x230), iVar3 = FUN_012e4e90(lVar12),
                       iVar10 != iVar3 ||
                       (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x238)), cVar2 == -3))
                      && ((iVar10 = *(int *)(param_1 + 0x248), iVar3 = FUN_012e4e90(lVar12),
                          iVar10 != iVar3 ||
                          (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x250)),
                          cVar2 == -3)))) &&
                     ((((iVar10 = *(int *)(param_1 + 0x260), iVar3 = FUN_012e4e90(lVar12),
                        iVar10 != iVar3 ||
                        (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x268)), cVar2 == -3)
                        ) && ((iVar10 = *(int *)(param_1 + 0x278), iVar3 = FUN_012e4e90(lVar12),
                              iVar10 != iVar3 ||
                              (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x280)),
                              cVar2 == -3)))) &&
                      ((iVar10 = *(int *)(param_1 + 0x290), iVar3 = FUN_012e4e90(lVar12),
                       iVar10 != iVar3 ||
                       (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x298)), cVar2 == -3))
                      )))))))))) &&
           (((iVar10 = *(int *)(param_1 + 0x2a8), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
             (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x2b0)), cVar2 == -3)) &&
            ((((iVar10 = *(int *)(param_1 + 0x2c0), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
               (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x2c8)), cVar2 == -3)) &&
              ((iVar10 = *(int *)(param_1 + 0x2d8), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
               (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x2e0)), cVar2 == -3)))) &&
             (((iVar10 = *(int *)(param_1 + 0x2f0), iVar3 = FUN_012e4e90(lVar12), iVar10 != iVar3 ||
               (cVar2 = FUN_0120e630(uVar13,*(undefined1 *)(param_1 + 0x2f8)), cVar2 == -3)) &&
              (uVar7 = FUN_012e9410(lVar12), (uVar7 & 1) == 0)))))))) {
          FUN_012e5540(&local_78,lVar12);
          if (local_78 == (undefined8 *)0x0) {
            local_88 = 0;
          }
          else {
            local_80 = local_78;
            (**(code **)(local_78[9] + 0x10))();
            uVar7 = FUN_012e7640(lVar12,&local_80);
            if (local_80 != (undefined8 *)0x0) {
              (**(code **)(local_80[9] + 0x18))();
              local_80 = (undefined8 *)0x0;
            }
            if ((uVar7 & 1) == 0) {
              local_88 = 0;
            }
            else {
              FUN_012d5170(local_78,auStack_68);
              local_88 = FUN_013092c0();
            }
            if (local_78 != (undefined8 *)0x0) {
              (**(code **)(local_78[9] + 0x18))();
            }
          }
          local_78 = puVar5;
          FUN_0075efb0(auStack_70,plVar11,0,1);
          puVar8 = local_78;
          piVar9 = (int *)local_78[0xe];
          if (piVar9 == (int *)0x0) {
            iVar10 = *(int *)((long)local_78 + 0x6c);
LAB_012ef6c4:
            FUN_00824290(local_78 + 0xc,iVar10 + 1);
            piVar9 = (int *)puVar8[0xe];
            iVar10 = *piVar9;
LAB_012ef6d8:
            *piVar9 = iVar10 + 1;
            lVar14 = FUN_012f4220(0,puVar8[0xc]);
            iVar10 = *(int *)(puVar8 + 0xd);
            *(int *)(puVar8 + 0xd) = iVar10 + 1;
            *(long *)(puVar8[0xe] + (long)iVar10 * 8 + 8) = lVar14;
          }
          else {
            iVar3 = *(int *)(local_78 + 0xd);
            iVar10 = *piVar9;
            if (iVar10 <= iVar3) {
              if (iVar10 == *(int *)((long)local_78 + 0x6c)) goto LAB_012ef6c4;
              goto LAB_012ef6d8;
            }
            *(int *)(local_78 + 0xd) = iVar3 + 1;
            lVar14 = *(long *)(piVar9 + (long)iVar3 * 2 + 2);
          }
          FUN_0075f0a0(auStack_70);
          uVar4 = FUN_012e4e90(lVar12);
          *(undefined8 *)(lVar14 + 0x18) = local_88;
          *(undefined4 *)(lVar14 + 0x20) = uVar4;
          *(undefined4 *)(lVar14 + 0x24) = 1;
          puVar8 = (undefined8 *)FUN_012e3520(lVar12);
          FUN_012b65a0(*puVar8);
          uVar4 = FUN_0087b560();
          *(undefined4 *)(lVar14 + 0x28) = uVar4;
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x48);
    FUN_012f7c50(*(undefined8 *)(param_1 + 0x70),puVar5);
    FUN_0075efb0(&local_78,plVar11,0,1);
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar5,200,8);
    FUN_0075f0a0(&local_78);
  }
  return;
}


