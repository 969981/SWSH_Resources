/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049b020; name: FUN_0049b020
 */


void FUN_0049b020(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  
  puVar3 = PTR_DAT_02712a90;
  if (*(int *)(param_2 + 0x58) == 0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    uVar1 = *(uint *)(param_1 + 1);
  }
  else {
    lVar7 = *(long *)(param_2 + 0x50);
    bVar8 = false;
    do {
      uVar1 = *(uint *)(param_1 + 1);
      if (uVar1 != 0) {
        uVar6 = *(uint *)(lVar7 + 4);
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar6 / uVar1;
        }
        for (puVar4 = *(uint **)(*param_1 + (ulong)(uVar6 - uVar2 * uVar1) * 8);
            puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
          if (*puVar4 == uVar6) {
            FUN_0049c690(puVar4,param_2);
            bVar8 = true;
            lVar5 = *(long *)(lVar7 + 8);
            goto joined_r0x0049b074;
          }
        }
      }
      lVar5 = *(long *)(lVar7 + 8);
joined_r0x0049b074:
      if (lVar5 != 0) {
        FUN_00404870(*(undefined4 *)puVar3);
        *(undefined8 *)(lVar7 + 8) = 0;
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x18);
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (bVar8) goto LAB_0049b164;
    uVar1 = *(uint *)(param_1 + 1);
  }
  if (uVar1 != 0) {
    lVar7 = *(long *)*param_1;
    if (lVar7 == 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        if (uVar1 <= uVar6) goto LAB_0049b164;
        lVar7 = ((long *)*param_1)[uVar6];
      } while (lVar7 == 0);
    }
    else {
      uVar6 = 0;
    }
    do {
      do {
        FUN_0049c690(lVar7,param_2);
        lVar7 = *(long *)(lVar7 + 8);
      } while (lVar7 != 0);
      do {
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 1) <= uVar6) goto LAB_0049b164;
        lVar7 = *(long *)(*param_1 + (ulong)uVar6 * 8);
      } while (lVar7 == 0);
    } while( true );
  }
LAB_0049b164:
  FUN_00477e90(*(undefined8 *)PTR_DAT_02712dc0,param_2,0);
  return;
}


