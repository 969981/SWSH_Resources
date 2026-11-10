/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df9110; name: FUN_00df9110
 */


bool FUN_00df9110(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 local_48;
  
  lVar10 = *(long *)PTR_DAT_027194d8;
  plVar6 = *(long **)(lVar10 + 0xb0);
  plVar9 = *(long **)(lVar10 + 0xb8);
  do {
    if (plVar6 == plVar9) {
      puVar11 = *(undefined8 **)(lVar10 + 0xb0);
      puVar12 = *(undefined8 **)(lVar10 + 0xb8);
      puVar1 = (undefined8 *)PTR_DAT_0271ee58;
      pbVar2 = PTR_DAT_0271ee50;
      if (puVar11 != puVar12) {
LAB_00df9214:
        do {
          plVar9 = (long *)*puVar11;
          plVar6 = (long *)(**(code **)plVar9[10])(plVar9 + 10);
          if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar2), iVar4 != 0)) {
            uVar7 = FUN_00a89c30();
            *puVar1 = uVar7;
            __cxa_guard_release(pbVar2);
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == puVar1) {
              uVar5 = (**(code **)(*(long *)*puVar11 + 0x88))();
              if ((uVar5 & 1) == 0) {
                (**(code **)(*plVar9 + 0x10))(&local_48,plVar9);
                if (*(long *)(param_1 + 0x58) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x58) = 0;
                }
                *(undefined8 *)(param_1 + 0x58) = local_48;
                puVar11 = *(undefined8 **)(lVar10 + 0xb0);
                puVar12 = *(undefined8 **)(lVar10 + 0xb8);
                puVar1 = (undefined8 *)PTR_DAT_0271ee68;
                pbVar2 = PTR_DAT_0271ee60;
                if (puVar11 != puVar12) goto LAB_00df9300;
                goto LAB_00df9354;
              }
              break;
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar12);
      }
LAB_00df9268:
      puVar11 = *(undefined8 **)(lVar10 + 0xb0);
      puVar12 = *(undefined8 **)(lVar10 + 0xb8);
      puVar1 = (undefined8 *)PTR_DAT_0271ee68;
      pbVar2 = PTR_DAT_0271ee60;
      if (puVar11 != puVar12) {
LAB_00df9300:
        do {
          plVar9 = (long *)*puVar11;
          plVar6 = (long *)(**(code **)plVar9[10])(plVar9 + 10);
          if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar2), iVar4 != 0)) {
            uVar7 = FUN_00a89c30();
            *puVar1 = uVar7;
            __cxa_guard_release(pbVar2);
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
            if (plVar6 == puVar1) {
              uVar5 = (**(code **)(*(long *)*puVar11 + 0x88))();
              if ((uVar5 & 1) == 0) {
                (**(code **)(*plVar9 + 0x10))(&local_48,plVar9);
                if (*(long *)(param_1 + 0x60) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x60) = 0;
                }
                *(undefined8 *)(param_1 + 0x60) = local_48;
                lVar10 = *(long *)(param_1 + 0x50);
                goto joined_r0x00df93d0;
              }
              break;
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar12);
      }
LAB_00df9354:
      lVar10 = *(long *)(param_1 + 0x50);
joined_r0x00df93d0:
      if ((((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) || (*(long *)(param_1 + 0x58) == 0)) ||
         ((*(int *)(*(long *)(param_1 + 0x58) + 0x54) == 0 || (*(long *)(param_1 + 0x60) == 0)))) {
        bVar3 = false;
      }
      else {
        bVar3 = *(int *)(*(long *)(param_1 + 0x60) + 0x54) != 0;
      }
      return bVar3;
    }
    plVar8 = (long *)*plVar6;
    uVar5 = FUN_00dfefc0(plVar8 + 10);
    if (((uVar5 & 1) != 0) && (uVar5 = (**(code **)(*(long *)*plVar6 + 0x88))(), (uVar5 & 1) == 0))
    {
      (**(code **)(*plVar8 + 0x10))(&local_48,plVar8);
      if (*(long *)(param_1 + 0x50) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      *(undefined8 *)(param_1 + 0x50) = local_48;
      puVar11 = *(undefined8 **)(lVar10 + 0xb0);
      puVar12 = *(undefined8 **)(lVar10 + 0xb8);
      puVar1 = (undefined8 *)PTR_DAT_0271ee58;
      pbVar2 = PTR_DAT_0271ee50;
      if (puVar11 != puVar12) goto LAB_00df9214;
      goto LAB_00df9268;
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


