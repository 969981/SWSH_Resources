/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe0c50; name: FUN_00fe0c50
 */


void FUN_00fe0c50(long param_1,byte *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 4) == -1) {
    FUN_00fe1bc0(*(undefined8 *)(param_1 + 0x18));
    iVar1 = *(int *)(param_2 + 0x4c);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    FUN_00fe1370(*(undefined8 *)(param_1 + 0x18),param_2 + 0xe,*(int *)(param_2 + 4),param_2 + 0x28,
                 *param_2 ^ 1,param_2[0xc],param_2[0xd],param_2[0x44],param_2[0x46],param_2[0x45]);
    iVar1 = *(int *)(param_2 + 0x4c);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  if (iVar1 == -1) {
    FUN_00fe1bc0(uVar2);
    iVar1 = *(int *)(param_2 + 0x94);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    FUN_00fe1370(uVar2,param_2 + 0x56,iVar1,param_2 + 0x70,param_2[0x48] ^ 1,param_2[0x54],
                 param_2[0x55],param_2[0x8c],param_2[0x8e],param_2[0x8d]);
    iVar1 = *(int *)(param_2 + 0x94);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (iVar1 == -1) {
    FUN_00fe1bc0(uVar2);
    iVar1 = *(int *)(param_2 + 0xdc);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  else {
    FUN_00fe1370(uVar2,param_2 + 0x9e,iVar1,param_2 + 0xb8,param_2[0x90] ^ 1,param_2[0x9c],
                 param_2[0x9d],param_2[0xd4],param_2[0xd6],param_2[0xd5]);
    iVar1 = *(int *)(param_2 + 0xdc);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
  }
  if (iVar1 == -1) {
    FUN_00fe1bc0(uVar2);
    return;
  }
  FUN_00fe1370(uVar2,param_2 + 0xe6,iVar1,param_2 + 0x100,param_2[0xd8] ^ 1,param_2[0xe4],
               param_2[0xe5],param_2[0x11c],param_2[0x11e],param_2[0x11d]);
  return;
}


