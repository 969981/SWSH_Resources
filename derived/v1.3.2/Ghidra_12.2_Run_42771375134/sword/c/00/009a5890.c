/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a5890; name: FUN_009a5890
 */


void FUN_009a5890(long param_1,undefined8 param_2,long param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  
  uVar1 = FUN_008e1290(param_3);
  iVar2 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),10);
  uVar1 = FUN_008e1290(param_3);
  iVar3 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),0xb);
  uVar1 = FUN_008e1290(param_3);
  iVar4 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),0xc);
  uVar1 = FUN_008e1290(param_3);
  iVar5 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),0xd);
  uVar1 = FUN_008e1290(param_3);
  iVar6 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),0xe);
  uVar1 = FUN_008e1290(param_3);
  iVar7 = FUN_008ec470(uVar1,*(undefined1 *)(param_3 + 0x33d),0xf);
  uVar8 = FUN_008e5700(param_2);
  *(char *)(param_1 + 10) =
       (char)((iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7) * 2 << (uVar8 & 1));
  return;
}


