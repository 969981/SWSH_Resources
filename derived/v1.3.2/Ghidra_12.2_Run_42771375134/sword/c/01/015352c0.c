/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015352c0; name: FUN_015352c0
 */


void FUN_015352c0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if ((*(char *)((long)param_2 + 0xd) != '\0') || (uVar2 = FUN_01534d30(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar3 = (uint)*(ushort *)(param_2 + 1) * 7 + param_2[6];
  if (*param_2 != 0x365) {
    uVar3 = (uint)*(ushort *)(param_2 + 1);
  }
  uVar1 = 0;
  if (uVar3 < 0x3f) {
    uVar1 = uVar3;
  }
  FUN_01534180(param_1,*param_2,param_2[2],(char)param_2[3],uVar1,param_2[5]);
  return;
}


