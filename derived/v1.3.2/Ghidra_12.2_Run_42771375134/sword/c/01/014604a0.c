/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014604a0; name: FUN_014604a0
 */


void FUN_014604a0(long param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_02710798;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  pcVar4 = (char *)FUN_0152d900(lVar7,*(undefined4 *)(*(long *)(param_1 + 400) + 0x838));
  FUN_01461840(*(undefined8 *)(param_1 + 400),0);
  cVar1 = *pcVar4;
  if (cVar1 == '\x03') {
    lVar6 = FUN_01457f50(param_1);
    uVar5 = FUN_0144ced0(*(undefined8 *)(lVar6 + 0x708),
                         *(undefined4 *)(*(long *)(param_1 + 400) + 0x838),
                         *(undefined8 *)(param_1 + 8));
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x14;
    }
    else {
      lVar6 = FUN_01457f50(param_1);
      FUN_0144d200(*(undefined8 *)(lVar6 + 0x708),*(undefined4 *)(*(long *)(param_1 + 400) + 0x838),
                   *(undefined8 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x1b4) = 0xd;
    }
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x1b4) = 0x10;
  }
  else if (cVar1 == '\x01') {
    lVar6 = *(long *)puVar2;
    lVar8 = *(long *)(lVar6 + 0x268);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar6 = *(long *)puVar2;
    }
    lVar6 = *(long *)(lVar6 + 0x220);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar5 = FUN_0152ded0(lVar8);
    if ((uVar5 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x15;
    }
    else {
      iVar3 = FUN_01507570(lVar6,*(undefined8 *)(param_1 + 8),0);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1b4) = 0x13;
      }
      else {
        *(undefined4 *)(param_1 + 0x1b4) = 7;
      }
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
  }
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01460624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return;
}


