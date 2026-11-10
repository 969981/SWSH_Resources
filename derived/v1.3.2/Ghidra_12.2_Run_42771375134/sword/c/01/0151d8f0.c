/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151d8f0; name: FUN_0151d8f0
 */


void FUN_0151d8f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined4 local_14;
  
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 0x5c;
    *(undefined4 *)(lVar1 + 0xb4) = 0xffffffff;
    *(int *)(lVar1 + 0xb8) = iVar4;
    iVar4 = iVar4 + 1;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined2 *)(lVar1 + 0x68) = 0;
    *(undefined4 *)(lVar1 + 0x6c) = 0;
    *(undefined2 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0x74) = 0;
    *(undefined8 *)(lVar1 + 0x7c) = 0xffffffff;
    *(undefined2 *)(lVar1 + 0x84) = 0;
    *(undefined4 *)(lVar1 + 0x88) = 0;
    *(undefined2 *)(lVar1 + 0x8c) = 0;
    *(undefined2 *)(lVar1 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0xa4) = 0;
    *(undefined2 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xac) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0xffffffff;
  } while (lVar3 != 0x678);
  local_14 = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_14);
  FUN_0151db20(param_1 + 0x60,uVar2);
  return;
}


