/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f1e0; name: FUN_0094f1e0
 */


undefined8 FUN_0094f1e0(undefined8 param_1,char *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_2[0x14] != '\0') && (*param_2 != '\x1f')) {
    lVar4 = FUN_009424e0();
    if (lVar4 == 0) {
      return 0;
    }
    bVar2 = param_2[1];
    if ((ulong)bVar2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      cVar3 = param_2[0xc];
      uVar7 = 0;
      do {
        FUN_00942390(param_1);
        uVar5 = FUN_009319a0();
        uVar6 = FUN_00913dd0(uVar5,param_2[uVar7 + 2]);
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_009424e0(param_1,param_2[uVar7 + 2]);
          uVar6 = FUN_008e1600();
          if (((uVar6 & 1) == 0) && (uVar6 = FUN_008e2f50(uVar5,uVar1,(int)cVar3), (uVar6 & 1) != 0)
             ) {
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar2);
    }
  }
  return 0;
}


