/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f35590; name: FUN_00f35590
 */


void FUN_00f35590(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  undefined1 auStack_70 [24];
  long local_58;
  
  if (*(int *)(param_1 + 0xb8) != 2) {
    if (*(int *)(param_1 + 0xb8) != 1) {
      return;
    }
    fVar13 = *(float *)(param_1 + 0xc0);
    if ((float)*(int *)(*(long *)(param_1 + 200) + 0x5c) <= fVar13) {
      lVar9 = 0;
      plVar10 = (long *)(param_1 + 0x50);
      do {
        lVar7 = *(long *)((long)plVar10 + lVar9);
        if ((lVar7 != 0) &&
           ((((((plVar11 = plVar10, *plVar10 == lVar7 ||
                (plVar11 = (long *)(param_1 + 0x58), *(long *)(param_1 + 0x58) == lVar7)) ||
               (plVar11 = (long *)(param_1 + 0x60), *(long *)(param_1 + 0x60) == lVar7)) ||
              ((plVar11 = (long *)(param_1 + 0x68), *(long *)(param_1 + 0x68) == lVar7 ||
               (plVar11 = (long *)(param_1 + 0x70), *(long *)(param_1 + 0x70) == lVar7)))) ||
             ((plVar11 = (long *)(param_1 + 0x78), *(long *)(param_1 + 0x78) == lVar7 ||
              ((plVar11 = (long *)(param_1 + 0x80), *(long *)(param_1 + 0x80) == lVar7 ||
               (plVar11 = (long *)(param_1 + 0x88), *(long *)(param_1 + 0x88) == lVar7)))))) ||
            ((plVar11 = (long *)(param_1 + 0x90), *(long *)(param_1 + 0x90) == lVar7 ||
             (plVar11 = (long *)(param_1 + 0x98), *(long *)(param_1 + 0x98) == lVar7)))))) {
          *(undefined1 *)(lVar7 + 0x590) = 0;
          *plVar11 = 0;
          *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
        }
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x50);
      if (*(long *)(param_1 + 0xb0) == 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 2;
      return;
    }
LAB_00f35700:
    *(float *)(param_1 + 0xc0) = fVar13 + 1.0;
    return;
  }
  fVar13 = *(float *)(param_1 + 0xc0);
  if (fVar13 < (float)*(int *)(*(long *)(param_1 + 200) + 0x5c)) goto LAB_00f35700;
  uVar8 = *(uint *)(param_1 + 0xbc);
  lVar9 = *(long *)(**(long **)(param_1 + 0xb0) + (ulong)uVar8 * 8);
  if (*(uint *)(lVar9 + 8) < 2) {
    lVar7 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(lVar7 + 0x578) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 *)(lVar7 + 0x570) = *(undefined8 *)(lVar9 + 0x10);
    plVar10 = *(long **)(param_1 + 0xa0);
    *(undefined1 *)(plVar10 + 0x43) = 1;
    if ((plVar10[0x6c] == 0) || (lVar9 = *(long *)(plVar10[0x6c] + 0x80), lVar9 == 0)) {
      *(undefined1 *)(plVar10 + 0xad) = 1;
    }
    else {
      plVar11 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      piVar1 = (int *)(lVar9 + 0x54);
      if (*piVar1 != 0) {
        iVar6 = *piVar1;
        do {
          while( true ) {
            if (iVar6 == 0) goto LAB_00f357cc;
            plVar12 = *(long **)(lVar9 + 0x58);
            lVar7 = FUN_006cb2c0();
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_00f357cc;
              if (plVar12 == (long *)lVar7) break;
              plVar12 = (long *)*plVar12;
            }
            iVar3 = *piVar1;
            if (iVar3 == iVar6) break;
            ClearExclusiveLocal();
            iVar6 = iVar3;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          iVar6 = iVar3;
        } while (cVar4 != '\0');
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 == 0) {
LAB_00f357cc:
          DAT_00000060 = 1;
        }
        else {
          *(undefined1 *)(lVar9 + 0x10) = 1;
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
        }
      }
      *(undefined1 *)(plVar10 + 0xad) = 1;
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    FUN_006cf0a0(auStack_70,&DAT_02663ce0);
    (**(code **)(*plVar10 + 0x1b0))(plVar10,auStack_70);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    plVar10[0x16] = plVar10[0xae];
    plVar10[0x17] = plVar10[0xaf];
    *(undefined1 *)(plVar10 + 0x18) = 1;
  }
  else {
    if (*(uint *)(lVar9 + 8) != 2) goto LAB_00f358b4;
    lVar7 = FUN_00f36ef0(param_1);
    if (lVar7 == 0) {
      uVar8 = *(uint *)(param_1 + 0xbc);
      goto LAB_00f358b4;
    }
    *(undefined4 *)(lVar7 + 0x580) = *(undefined4 *)(lVar9 + 0x34);
    *(undefined8 *)(lVar7 + 0x578) = *(undefined8 *)(lVar9 + 0x18);
    *(undefined8 *)(lVar7 + 0x570) = *(undefined8 *)(lVar9 + 0x10);
    uVar2 = *(undefined4 *)(lVar9 + 0x24);
    *(undefined4 *)(lVar7 + 0x598) = *(undefined4 *)(lVar9 + 0x20);
    *(undefined4 *)(lVar7 + 0x59c) = uVar2;
    *(undefined4 *)(lVar7 + 0x5a8) = *(undefined4 *)(lVar9 + 0x28);
    uVar2 = *(undefined4 *)(lVar9 + 0x2c);
    *(undefined4 *)(lVar7 + 0x5a0) = uVar2;
    *(undefined4 *)(lVar7 + 0x5a4) = uVar2;
    *(undefined4 *)(lVar7 + 0x5ac) = *(undefined4 *)(lVar9 + 0x30);
    FUN_00f37040();
  }
  uVar8 = *(int *)(param_1 + 0xbc) + 1;
  *(uint *)(param_1 + 0xbc) = uVar8;
LAB_00f358b4:
  if ((uint)((ulong)((*(long **)(param_1 + 0xb0))[1] - **(long **)(param_1 + 0xb0)) >> 3) <= uVar8)
  {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}


