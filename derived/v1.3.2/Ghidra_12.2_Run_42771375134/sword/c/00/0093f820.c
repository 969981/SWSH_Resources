/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093f820; name: FUN_0093f820
 */


void FUN_0093f820(undefined8 *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 local_68;
  uint local_67;
  byte local_63;
  undefined1 auStack_58 [8];
  
  iVar2 = FUN_008db610(param_1[6],5);
  if (iVar2 != 0) {
    iVar7 = 0;
    do {
      uVar3 = FUN_008db610(param_1[6],iVar7 + 6);
      local_67 = 4;
      local_68 = FUN_008fa070(*param_1,uVar3);
      uVar6 = 0;
      *(undefined1 *)((undefined2 *)((ulong)&local_68 | 2) + 1) = 0;
      *(undefined2 *)((ulong)&local_68 | 2) = 0;
      local_63 = param_2 & 1;
      do {
        uVar4 = FUN_008dd460(uVar6);
        if (((uVar4 & 1) != 0) &&
           (uVar1 = (int)(uVar6 >> 3) + 1, (uVar1 & 0xff) < (local_67 & 0xff))) {
          uVar4 = (ulong)(byte)uVar1;
          auStack_58[uVar4 - 0xf] = auStack_58[uVar4 - 0xf] | (byte)(1 << (ulong)((uint)uVar6 & 7));
        }
        uVar1 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while (uVar1 != 0x18);
      uVar5 = FUN_00925870(param_1[4]);
      FUN_0094c410(uVar5,auStack_58,&local_68);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar2);
  }
  return;
}


