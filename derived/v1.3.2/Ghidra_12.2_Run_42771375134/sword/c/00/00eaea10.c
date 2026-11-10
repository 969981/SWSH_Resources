/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaea10; name: FUN_00eaea10
 */


void FUN_00eaea10(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long local_140 [21];
  long local_98 [5];
  
  if (*(int *)(param_1 + 0x700) < 1) {
    return;
  }
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  lVar10 = *(long *)(param_1 + 0x6c0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_98[0] = lVar10;
  lVar7 = *(long *)(param_1 + 0x6d0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_98[1] = lVar7;
  lVar7 = *(long *)(param_1 + 0x6e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_98[2] = lVar7;
  lVar7 = *(long *)(param_1 + 0x6f0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  plVar11 = local_98;
  local_98[3] = lVar7;
  do {
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
      memcpy(local_140,(void *)(param_1 + 0x3a0),0xa0);
      lVar10 = *plVar11;
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar9 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            uVar6 = FUN_00e5d3d0(*(undefined8 *)(lVar10 + 0x58));
            if ((uVar6 & 1) == 0) goto LAB_00eaebdc;
            iVar2 = *piVar1;
            if (iVar2 != iVar9) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x60);
              if (lVar10 != 0) {
                bVar5 = FUN_00ddfcb0(0,local_140,lVar10 + 0x60,param_1 + 0x6a0);
                (**(code **)(*(long *)(lVar10 + -8) + 0x18))((long *)(lVar10 + -8));
                lVar10 = *plVar11;
                goto joined_r0x00eaeb8c;
              }
              goto LAB_00eaebdc;
            }
            iVar9 = iVar2;
            if (iVar2 == 0) goto LAB_00eaebdc;
          }
          ClearExclusiveLocal();
          iVar9 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00eaebdc:
      bVar5 = FUN_00ddfcb0(0,local_140,0xb0,param_1 + 0x6a0);
      lVar10 = *plVar11;
joined_r0x00eaeb8c:
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
        piVar1 = (int *)(lVar10 + 0x54);
        iVar9 = *(int *)(lVar10 + 0x54);
        do {
          while( true ) {
            uVar6 = FUN_00e5d3d0(*(undefined8 *)(lVar10 + 0x58));
            if ((uVar6 & 1) == 0) goto LAB_00eaec00;
            iVar2 = *piVar1;
            if (iVar2 != iVar9) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = *(long *)(lVar10 + 0x60);
              if (lVar10 != 0) {
                cVar3 = *(char *)(lVar10 + 0xae2);
                (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
                goto LAB_00eaec08;
              }
              goto LAB_00eaec00;
            }
            iVar9 = iVar2;
            if (iVar2 == 0) goto LAB_00eaec00;
          }
          ClearExclusiveLocal();
          iVar9 = iVar2;
        } while (iVar2 != 0);
      }
LAB_00eaec00:
      cVar3 = DAT_00000b32;
LAB_00eaec08:
      if ((cVar3 == '\0' & bVar5) == 0) {
        lVar10 = *plVar11;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        puVar8 = *(undefined8 **)(lVar10 + 0x60) + -10;
        (**(code **)**(undefined8 **)(lVar10 + 0x60))();
        uVar6 = FUN_00e5d3d0();
        if ((uVar6 & 1) == 0) {
          puVar8 = (undefined8 *)0x0;
        }
        cVar3 = *(char *)(puVar8 + 0x166);
        local_140[0] = lVar10;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        uVar6 = FUN_00fa3020(local_140,param_1 + 0x6c0,4,cVar3 == '\0');
        if (local_140[0] != 0) {
          (**(code **)(*(long *)(local_140[0] + 0x48) + 0x18))();
          local_140[0] = 0;
        }
        if ((uVar6 & 1) != 0) {
          *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
          *(undefined4 *)(param_1 + 0x690) = 0x5a;
        }
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
      }
    }
    plVar11 = plVar11 + 1;
    if (plVar11 == local_98 + 4) {
      if (local_98[3] != 0) {
        (**(code **)(*(long *)(local_98[3] + 0x48) + 0x18))();
        local_98[3] = 0;
      }
      if (local_98[2] != 0) {
        (**(code **)(*(long *)(local_98[2] + 0x48) + 0x18))();
        local_98[2] = 0;
      }
      if (local_98[1] != 0) {
        (**(code **)(*(long *)(local_98[1] + 0x48) + 0x18))();
        local_98[1] = 0;
      }
      if (local_98[0] == 0) {
        return;
      }
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
      return;
    }
    lVar10 = *plVar11;
  } while( true );
}


