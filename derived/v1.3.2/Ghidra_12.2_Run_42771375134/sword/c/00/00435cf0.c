/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435cf0; name: FUN_00435cf0
 */


void FUN_00435cf0(ulong *param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ushort *puVar9;
  
  puVar3 = PTR_DAT_02712ad0;
  if (*param_1 != param_1[1]) {
    do {
      puVar9 = (ushort *)*param_1;
      switch(puVar9[1]) {
      case 1:
        FUN_0048fd60(*(undefined8 *)puVar3,*(undefined4 *)(puVar9 + 6));
        (**(code **)(**(long **)(puVar9 + 0x14) + 0x18))();
        if (*(long *)(puVar9 + 10) != 0) {
          FUN_00431200();
        }
        break;
      case 0x19:
        puVar1 = puVar9 + 2;
        if (*(int *)(puVar9 + 6) == 3) {
          FUN_0048fd60(*(undefined8 *)puVar3,*(undefined4 *)(*(long *)puVar1 + 0x6c));
          (**(code **)(**(long **)puVar1 + 0x18))();
        }
        plVar4 = *(long **)puVar1;
        goto LAB_00435e3c;
      case 0x20:
      case 0x21:
      case 0x26:
        plVar4 = *(long **)(puVar9 + 6);
LAB_00435e3c:
        (**(code **)(*plVar4 + 0x18))();
        break;
      case 0x22:
        plVar4 = *(long **)(puVar9 + 6);
        if (plVar4 != (long *)0x0) goto LAB_00435e3c;
        break;
      case 0x36:
        piVar5 = (int *)param_1[0x14];
        uVar2 = (uint)param_1[0x15];
        piVar7 = piVar5;
        if (uVar2 == 0) {
LAB_00435d84:
          if (piVar7 != piVar5 + (ulong)uVar2 * 6) {
            (**(code **)(piVar7 + 4))(puVar9 + 4,*puVar9 - 4);
          }
        }
        else {
          lVar8 = (ulong)uVar2 * 0x18;
          do {
            if (*piVar7 == *(int *)(puVar9 + 2)) goto LAB_00435d84;
            lVar8 = lVar8 + -0x18;
            piVar7 = piVar7 + 6;
          } while (lVar8 != 0);
        }
        break;
      case 0x37:
        uVar6 = (ulong)((int)param_1[4] + 3U & 0xfffffffc);
        goto LAB_00435e54;
      }
      uVar6 = (ulong)(*puVar9 + 3) & 0x1fffc;
LAB_00435e54:
      uVar6 = *param_1 + uVar6;
      if (param_1[3] <= uVar6) {
        uVar6 = param_1[2];
      }
      *param_1 = uVar6;
    } while (*param_1 != param_1[1]);
  }
  return;
}


