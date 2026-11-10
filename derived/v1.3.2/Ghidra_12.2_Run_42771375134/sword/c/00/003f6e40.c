/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f6e40; name: FUN_003f6e40
 */


undefined8 * FUN_003f6e40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar2 = *(uint *)((long)param_1 + 0x314) << 1;
  if ((*(uint *)((long)param_1 + 0x314) & 0x7fffffff) == 0) {
    iVar2 = 1;
  }
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x62);
    puVar3 = (undefined8 *)0x0;
  }
  else if ((uint)(iVar2 * 0x18) < 0x301 && *(char *)(param_1 + 0x60) == '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar1 = *(uint *)(param_1 + 0x62);
    puVar3 = param_1;
  }
  else {
    puVar3 = (undefined8 *)
             FUN_00401b30(param_1,iVar2 * 0x18,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = *(uint *)(param_1 + 0x62);
  }
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)param_1[0x61];
    puVar6 = puVar3;
    do {
      puVar6[2] = puVar5[2];
      puVar6[1] = puVar5[1];
      puVar7 = puVar6 + 3;
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 3;
      puVar6 = puVar7;
    } while (puVar7 < puVar3 + (ulong)uVar1 * 3);
    uVar4 = (ulong)*(uint *)(param_1 + 0x62);
  }
  puVar5 = puVar3 + uVar4 * 3;
  puVar5[2] = param_2[2];
  puVar5[1] = param_2[1];
  *puVar5 = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x314)) {
    if (param_1 == (undefined8 *)param_1[0x61]) {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    else {
      FUN_00401ce0(param_1);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x62);
  param_1[0x61] = puVar3;
  *(int *)((long)param_1 + 0x314) = iVar2;
  *(uint *)(param_1 + 0x62) = uVar1 + 1;
  return puVar3 + (ulong)uVar1 * 3;
}


