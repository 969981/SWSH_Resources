/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068c3a0; name: FUN_0068c3a0
 */


undefined8 FUN_0068c3a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return 0xfffffffe;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x58) = 2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar4 + 0x10);
  iVar1 = *(int *)(lVar4 + 0x2c);
  *(undefined4 *)(lVar4 + 0x28) = 0;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
    *(int *)(lVar4 + 0x2c) = iVar1;
  }
  uVar3 = 0x71;
  if (iVar1 != 0) {
    uVar3 = 0x2a;
  }
  *(undefined4 *)(lVar4 + 8) = uVar3;
  if (iVar1 == 2) {
    uVar2 = FUN_0068f300(0,0,0);
  }
  else {
    uVar2 = FUN_0068ef30(0,0,0);
  }
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0;
  FUN_0068f5f0(lVar4);
  *(ulong *)(lVar4 + 0x58) = (ulong)*(uint *)(lVar4 + 0x44) << 1;
  *(undefined2 *)(*(long *)(lVar4 + 0x68) + (ulong)(*(int *)(lVar4 + 0x74) - 1) * 2) = 0;
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(lVar4 + 0x68),0,(ulong)(*(int *)(lVar4 + 0x74) - 1) << 1);
}


