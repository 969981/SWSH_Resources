/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a28ff0; name: FUN_00a28ff0
 */


void FUN_00a28ff0(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = *(long *)(param_1 + 0x548);
  FUN_00ff8fd0(lVar6,0);
  plVar8 = *(long **)(lVar6 + 0x80);
  for (plVar11 = *(long **)(lVar6 + 0x78); plVar8 != plVar11; plVar11 = plVar11 + 1) {
    FUN_006cf0c0(&local_80,*plVar11 + 0x5c0);
    lVar7 = local_80;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar7 == -0x76ea05eb7fda9489) {
      plVar5 = *(long **)(lVar6 + 0x80);
      if (plVar5 != plVar11) goto LAB_00a2908c;
      goto LAB_00a290c8;
    }
  }
  plVar5 = *(long **)(lVar6 + 0x80);
  plVar11 = plVar8;
  if (plVar5 == plVar8) {
LAB_00a290c8:
    lVar7 = 0;
    plVar8 = *(long **)(lVar6 + 0x78);
    if (plVar11 != plVar8) goto LAB_00a290fc;
  }
  else {
LAB_00a2908c:
    lVar7 = *plVar11;
    if (lVar7 == 0) {
      plVar8 = *(long **)(lVar6 + 0x78);
      plVar11 = plVar5;
      if (plVar5 != plVar8) goto LAB_00a290fc;
    }
    else {
      uVar3 = FUN_00a322c0(lVar7 + 0x50);
      plVar11 = *(long **)(lVar6 + 0x80);
      if ((uVar3 & 1) == 0) {
        lVar7 = 0;
      }
      plVar8 = *(long **)(lVar6 + 0x78);
      if (plVar11 != plVar8) {
LAB_00a290fc:
        do {
          FUN_006cf0c0(&local_80,*plVar8 + 0x5c0);
          lVar9 = local_80;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar9 == -0xb7887be3eeffc94) {
            plVar11 = *(long **)(lVar6 + 0x80);
            if (plVar11 != plVar8) goto LAB_00a29148;
            goto LAB_00a29184;
          }
          plVar8 = plVar8 + 1;
        } while (plVar11 != plVar8);
      }
    }
  }
  plVar8 = plVar11;
  plVar11 = *(long **)(lVar6 + 0x80);
  if (plVar11 == plVar8) {
LAB_00a29184:
    lVar9 = 0;
    plVar5 = *(long **)(lVar6 + 0x78);
    plVar11 = plVar8;
    if (plVar8 != *(long **)(lVar6 + 0x78)) goto LAB_00a291b8;
  }
  else {
LAB_00a29148:
    lVar9 = *plVar8;
    if (lVar9 == 0) {
      plVar8 = plVar11;
      plVar5 = *(long **)(lVar6 + 0x78);
      if (plVar11 != *(long **)(lVar6 + 0x78)) goto LAB_00a291b8;
    }
    else {
      uVar3 = FUN_00a323b0(lVar9 + 0x50);
      plVar8 = *(long **)(lVar6 + 0x80);
      if ((uVar3 & 1) == 0) {
        lVar9 = 0;
      }
      plVar5 = *(long **)(lVar6 + 0x78);
      plVar11 = plVar8;
      if (plVar8 != *(long **)(lVar6 + 0x78)) {
LAB_00a291b8:
        do {
          plVar8 = plVar5;
          FUN_006cf0c0(&local_80,*plVar8 + 0x5c0);
          lVar12 = local_80;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar12 == 0x73bb57799f8b94c6) {
            plVar11 = *(long **)(lVar6 + 0x80);
            if (plVar11 != plVar8) goto LAB_00a29204;
            goto LAB_00a29228;
          }
          plVar5 = plVar8 + 1;
          plVar8 = plVar11;
        } while (plVar11 != plVar5);
      }
    }
  }
  plVar11 = *(long **)(lVar6 + 0x80);
  if (plVar11 == plVar8) {
LAB_00a29228:
    lVar12 = 0;
    plVar8 = *(long **)(lVar6 + 0x78);
    plVar5 = plVar11;
    if (plVar11 == *(long **)(lVar6 + 0x78)) goto LAB_00a29288;
  }
  else {
LAB_00a29204:
    lVar12 = *plVar8;
    plVar8 = *(long **)(lVar6 + 0x78);
    plVar5 = plVar11;
    if (plVar11 == *(long **)(lVar6 + 0x78)) goto LAB_00a29288;
  }
  do {
    plVar11 = plVar8;
    FUN_006cf0c0(&local_80,*plVar11 + 0x5c0);
    lVar13 = local_80;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar13 == -0x64adc3f422b2c0c1) {
      if (*(long **)(lVar6 + 0x80) != plVar11) goto LAB_00a29294;
      goto LAB_00a292ac;
    }
    plVar8 = plVar11 + 1;
    plVar11 = plVar5;
  } while (plVar5 != plVar8);
LAB_00a29288:
  if (*(long **)(lVar6 + 0x80) == plVar11) {
LAB_00a292ac:
    lVar13 = 0;
  }
  else {
LAB_00a29294:
    lVar13 = *plVar11;
  }
  local_80 = 0x582e292aa5334625;
  local_78 = "RemainTimeView";
  local_70 = 0xe;
  local_68 = 0;
  uVar4 = FUN_00a09b10(lVar6,&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_00a3b350(lVar7,lVar12);
  FUN_00a37ba0(lVar9,lVar13);
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_80);
  lVar6 = local_80;
  if (local_80 != 0) {
    puVar10 = *(undefined8 **)(local_80 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar11 = (long *)(**(code **)*puVar10)(puVar10);
      lVar7 = FUN_00a871c0();
      for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)lVar7) {
          puVar10 = puVar10 + -10;
          goto LAB_00a29374;
        }
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_00a29374:
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    if (puVar10 != (undefined8 *)0x0) {
      uVar1 = (**(code **)(*(long *)puVar10[0x70] + 0x8b0))();
      FUN_00a35aa0(uVar4,uVar1 & 1);
      FUN_00ffa290(uVar4,1,1);
      (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_80);
      lVar6 = local_80;
      if (local_80 != 0) {
        puVar10 = *(undefined8 **)(local_80 + 0x60);
        if (puVar10 != (undefined8 *)0x0) {
          plVar11 = (long *)(**(code **)*puVar10)(puVar10);
          lVar7 = FUN_00a871c0();
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)lVar7) {
              puVar10 = puVar10 + -10;
              goto LAB_00a29410;
            }
          }
          puVar10 = (undefined8 *)0x0;
        }
LAB_00a29410:
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        if (puVar10 != (undefined8 *)0x0) {
          iVar2 = (**(code **)(*(long *)puVar10[0x70] + 0x870))();
          if (iVar2 == 2) {
            FUN_00a29480(param_1);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


