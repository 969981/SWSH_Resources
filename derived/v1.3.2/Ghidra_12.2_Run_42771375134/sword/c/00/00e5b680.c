/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5b680; name: FUN_00e5b680
 */


void FUN_00e5b680(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long local_48;
  
  if ((0 < *(int *)(param_1 + 0xc60)) && (lVar8 = *(long *)(param_1 + 0xc50), lVar8 != 0)) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    if (*(int *)(lVar8 + 0x54) != 0) {
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
        piVar1 = (int *)(lVar8 + 0x54);
        iVar10 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            uVar6 = FUN_00e5d3d0(*(undefined8 *)(lVar8 + 0x58));
            if ((uVar6 & 1) == 0) goto LAB_00e5b77c;
            iVar2 = *piVar1;
            if (iVar2 != iVar10) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar7 = *(long *)(lVar8 + 0x60);
              if (lVar7 != 0) {
                bVar5 = FUN_00ddfcb0(0,param_1 + 0xb90,lVar7 + 0x60,param_1 + 0xc30);
                (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
                goto joined_r0x00e5b774;
              }
              goto LAB_00e5b77c;
            }
            iVar10 = iVar2;
            if (iVar2 == 0) goto LAB_00e5b77c;
          }
          ClearExclusiveLocal();
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e5b77c:
      bVar5 = FUN_00ddfcb0(0,param_1 + 0xb90,0xb0,param_1 + 0xc30);
joined_r0x00e5b774:
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
        piVar1 = (int *)(lVar8 + 0x54);
        iVar10 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            uVar6 = FUN_00e5d3d0(*(undefined8 *)(lVar8 + 0x58));
            if ((uVar6 & 1) == 0) goto LAB_00e5b804;
            iVar2 = *piVar1;
            if (iVar2 != iVar10) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar7 = *(long *)(lVar8 + 0x60);
              if (lVar7 != 0) {
                cVar3 = *(char *)(lVar7 + 0xae2);
                (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
                goto LAB_00e5b80c;
              }
              goto LAB_00e5b804;
            }
            iVar10 = iVar2;
            if (iVar2 == 0) goto LAB_00e5b804;
          }
          ClearExclusiveLocal();
          iVar10 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00e5b804:
      cVar3 = DAT_00000b32;
LAB_00e5b80c:
      if ((cVar3 == '\0' & bVar5) == 0) {
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        puVar9 = *(undefined8 **)(lVar8 + 0x60) + -10;
        (**(code **)**(undefined8 **)(lVar8 + 0x60))();
        uVar6 = FUN_00e5d3d0();
        if ((uVar6 & 1) == 0) {
          puVar9 = (undefined8 *)0x0;
        }
        cVar3 = *(char *)(puVar9 + 0x166);
        local_48 = lVar8;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        uVar6 = FUN_00fa3020(&local_48,param_1 + 0xc50,1,cVar3 == '\0');
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + -1;
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        }
        *(undefined1 *)(param_1 + 0xc65) = 0;
      }
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  return;
}


