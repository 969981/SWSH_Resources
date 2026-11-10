/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f6d50; name: FUN_003f6d50
 */


void FUN_003f6d50(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x62);
    puVar2 = (undefined8 *)0x0;
  }
  else if (((uint)(param_2 * 0x18) < 0x301) && (*(char *)(param_1 + 0x60) == '\0')) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar1 = *(uint *)(param_1 + 0x62);
    puVar2 = param_1;
  }
  else {
    puVar2 = (undefined8 *)
             FUN_00401b30(param_1,param_2 * 0x18,
                          "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = *(uint *)(param_1 + 0x62);
  }
  if (uVar1 != 0) {
    puVar3 = (undefined8 *)param_1[0x61];
    puVar4 = puVar2;
    do {
      puVar4[2] = puVar3[2];
      puVar4[1] = puVar3[1];
      puVar5 = puVar4 + 3;
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 3;
      puVar4 = puVar5;
    } while (puVar5 < puVar2 + (ulong)uVar1 * 3);
  }
  if (-1 < *(int *)((long)param_1 + 0x314)) {
    if (param_1 == (undefined8 *)param_1[0x61]) {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    else {
      FUN_00401ce0(param_1);
    }
  }
  param_1[0x61] = puVar2;
  *(int *)((long)param_1 + 0x314) = param_2;
  return;
}


