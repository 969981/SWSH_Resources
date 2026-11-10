/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095eca0; name: FUN_0095eca0
 */


void FUN_0095eca0(long param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = FUN_00942b30(param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00942b40(param_2);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00915360(*(undefined8 *)(param_1 + 8));
    cVar1 = param_2[0xe];
    *(short *)(param_2 + 4) = (short)uVar3;
  }
  else {
    uVar3 = (uint)*(ushort *)(param_2 + 2);
    cVar1 = param_2[0xe];
    *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 2);
  }
  if (cVar1 == '\0') {
    uVar3 = FUN_00915370(*(undefined8 *)(param_1 + 8),uVar3,*(undefined2 *)(param_3 + 0xc));
  }
  else {
    uVar3 = 1;
  }
  uVar2 = FUN_00942b40(param_2);
  if ((uVar2 & 1) == 0) {
    FUN_00936100(*(undefined8 *)(param_1 + 0x10),param_2[0xc],*(undefined4 *)(param_2 + 8),
                 param_2[0xd],uVar3 & 1);
  }
  else {
    FUN_00936130();
  }
  *param_2 = 1;
  return;
}


