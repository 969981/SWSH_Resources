/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b5b80; name: FUN_011b5b80
 */


void FUN_011b5b80(long param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    puVar3 = param_2 + 1;
    *(undefined4 *)(param_1 + 0x30) = *param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = param_2[0xc];
    puVar3 = param_2 + 0xd;
  }
  *(undefined4 *)(param_1 + 0x34) = *puVar3;
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x38) = param_2[2];
    puVar3 = param_2 + 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = param_2[0xe];
    puVar3 = param_2 + 0xf;
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar3;
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x40) = param_2[4];
    puVar3 = param_2 + 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = param_2[0x10];
    puVar3 = param_2 + 0x11;
  }
  *(undefined4 *)(param_1 + 0x44) = *puVar3;
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x48) = param_2[6];
    puVar3 = param_2 + 7;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = param_2[0x12];
    puVar3 = param_2 + 0x13;
  }
  *(undefined4 *)(param_1 + 0x4c) = *puVar3;
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x50) = param_2[8];
    puVar3 = param_2 + 9;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) = param_2[0x14];
    puVar3 = param_2 + 0x15;
  }
  *(undefined4 *)(param_1 + 0x54) = *puVar3;
  cVar2 = FUN_01524bf0(lVar5);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x58) = param_2[10];
    piVar4 = param_2 + 0xb;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = param_2[0x16];
    piVar4 = param_2 + 0x17;
  }
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (*(int *)(param_1 + 0x34) != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(int *)(param_1 + 0x3c) != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(int *)(param_1 + 0x44) != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (iVar1 != -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011b5d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


