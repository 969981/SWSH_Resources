/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401400; name: FUN_00401400
 */


void FUN_00401400(ulong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    puVar4 = (undefined8 *)
             FUN_00401510(param_1,(ulong)param_2 << 3,"./../../foundation/include/PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 != 0) {
    puVar2 = puVar4 + uVar1;
    puVar3 = puVar2;
    if (puVar2 <= puVar4 + 1) {
      puVar3 = puVar4 + 1;
    }
    puVar5 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar3 + ~(ulong)puVar4 >> 3) & 0x1fffffff) + 1;
    puVar8 = puVar4;
    if ((uVar1 & 3) != 0) {
      lVar9 = -((ulong)uVar1 & 3);
      puVar6 = puVar5;
      puVar7 = puVar4;
      do {
        puVar5 = puVar6 + 1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar6;
        puVar6 = puVar5;
        puVar7 = puVar8;
      } while (lVar9 != 0);
    }
    if (0x17 < (long)puVar3 + ~(ulong)puVar4) {
      do {
        *puVar8 = *puVar5;
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        puVar8[3] = puVar5[3];
        puVar8 = puVar8 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar8 < puVar2);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    FUN_00401580(param_1,*param_1);
  }
  *param_1 = (ulong)puVar4;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


