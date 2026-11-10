/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938ac0; name: FUN_00938ac0
 */


void FUN_00938ac0(long param_1,uint *param_2,long param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = FUN_0093af00(param_3);
  uVar1 = *param_2;
  if (uVar2 != 0) {
    uVar1 = uVar2;
  }
  uVar3 = FUN_0093afc0(param_3);
  if ((uVar3 & 1) != 0) {
    uVar2 = *(uint *)(param_3 + 0x10);
    FUN_00918050(*(undefined8 *)(param_1 + 0x18),*param_4,0x98,uVar2 & 0x1f,uVar2 >> 5 & 0x1f,
                 uVar2 >> 10 & 0x1f,uVar2 >> 0xf & 0x1f,uVar2 >> 0x14 & 0x1f,uVar2 >> 0x19 & 0x1f);
    FUN_0093ae20(param_3);
  }
  uVar3 = FUN_0095ee10(param_4);
  if ((uVar3 & 1) == 0) {
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x87,*(undefined1 *)(param_3 + 4),
                 *(undefined1 *)(param_3 + 5),uVar1 & 0xffff,*(undefined1 *)((long)param_2 + 0xe),
                 *(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 7),
                 *(undefined1 *)(param_3 + 0xe),*(undefined1 *)(param_3 + 8),(char)param_2[6]);
  }
  else {
    FUN_00918050(*(undefined8 *)(param_1 + 0x18),param_4[1],0x87,*(undefined1 *)(param_3 + 4),
                 *(undefined1 *)(param_3 + 5),uVar1,*(undefined1 *)((long)param_2 + 0xe),
                 *(undefined1 *)(param_3 + 6),*(undefined1 *)(param_3 + 7),
                 *(undefined1 *)(param_3 + 0xe),*(undefined1 *)(param_3 + 8),param_2[6]);
  }
  *(undefined1 *)(param_3 + 6) = 0;
  *(undefined1 *)(param_3 + 10) = 1;
  return;
}


