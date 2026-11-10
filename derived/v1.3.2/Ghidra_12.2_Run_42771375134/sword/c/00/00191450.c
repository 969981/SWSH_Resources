/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00191450; name: FUN_00191450
 */


void FUN_00191450(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  
  uVar4 = (param_2 << 0x20 ^ 0xffffffffffffffffU) + param_2;
  uVar4 = uVar4 ^ uVar4 >> 0x16;
  uVar4 = uVar4 + (uVar4 << 0xd ^ 0xffffffffffffffff);
  uVar4 = (uVar4 ^ uVar4 >> 8) * 9;
  uVar4 = uVar4 ^ uVar4 >> 0xf;
  uVar4 = uVar4 + (uVar4 << 0x1b ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(param_1 + ((ulong)((uint)(uVar4 >> 0x1f) ^ (uint)uVar4) & 0x3ff) * 8);
  puVar5 = (undefined8 *)*puVar1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    if ((undefined8 *)puVar5[5] == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
      piVar8 = (int *)(puVar5 + 6);
      iVar9 = *piVar8;
      goto joined_r0x00191544;
    }
    puVar2 = puVar5;
    puVar6 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)puVar5[5];
    do {
      puVar5 = puVar3;
      puVar7 = puVar2;
      if (puVar7[4] == param_2) {
        piVar8 = (int *)(puVar7 + 6);
        iVar9 = *piVar8;
        puVar5 = puVar7;
        puVar7 = puVar6;
        goto joined_r0x00191544;
      }
      puVar2 = puVar5;
      puVar6 = puVar7;
      puVar3 = (undefined8 *)puVar5[5];
    } while ((undefined8 *)puVar5[5] != (undefined8 *)0x0);
  }
  piVar8 = (int *)(puVar5 + 6);
  iVar9 = *piVar8;
joined_r0x00191544:
  if (iVar9 == 1) {
    if (puVar7 != (undefined8 *)0x0) {
      puVar1 = puVar7 + 5;
    }
    *puVar1 = puVar5[5];
    *(int *)(param_1 + 0x2224) = *(int *)(param_1 + 0x2224) + -1;
    *puVar5 = *(undefined8 *)(param_1 + 0x2230);
    iVar9 = *(int *)(param_1 + 0x2238);
    piVar8 = (int *)(param_1 + 0x2238);
    *(undefined8 **)(param_1 + 0x2230) = puVar5;
  }
  *piVar8 = iVar9 + -1;
  return;
}


