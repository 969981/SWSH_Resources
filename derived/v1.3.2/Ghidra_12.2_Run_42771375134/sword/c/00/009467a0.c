/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009467a0; name: FUN_009467a0
 */


undefined8 FUN_009467a0(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  
  uVar4 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar6 = 0;
    pcVar7 = (char *)(param_1 + 0x61);
    do {
      if ((*pcVar7 == '\0') && (*(int *)(pcVar7 + -0x51) == 1)) {
        iVar2 = FUN_00946b90(pcVar7 + -0x59);
        if (iVar2 == param_2) {
LAB_0094683c:
          uVar3 = FUN_00946d90(*(undefined4 *)(pcVar7 + -5),3);
          *(undefined4 *)(pcVar7 + -5) = uVar3;
          bVar1 = *(byte *)(param_1 + 0xb48);
          uVar4 = (ulong)bVar1;
          if (uVar4 == 0) {
            uVar6 = 0;
LAB_0094688c:
            uVar5 = (uint)uVar6;
          }
          else {
            uVar6 = 0;
            pcVar7 = pcVar7 + (-1 - param_1);
            do {
              pcVar7 = pcVar7 + -0x60;
              if (pcVar7 == (char *)0x0) goto LAB_0094688c;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4);
            uVar5 = (uint)bVar1;
          }
          if ((uint)bVar1 <= (uVar5 + 1 & 0xff)) {
            return 1;
          }
          uVar6 = (ulong)(uVar5 + 1) & 0xff;
          pcVar7 = (char *)(param_1 + 0x61 + uVar6 * 0x60);
          do {
            if ((*pcVar7 == '\0') && (*(int *)(pcVar7 + -0x51) == 1)) {
              iVar2 = FUN_00946b90(pcVar7 + -0x59);
              if (iVar2 == param_2) goto LAB_0094683c;
              uVar4 = (ulong)*(byte *)(param_1 + 0xb48);
            }
            uVar6 = uVar6 + 1;
            pcVar7 = pcVar7 + 0x60;
            if (uVar4 <= uVar6) {
              return 1;
            }
          } while( true );
        }
        uVar4 = (ulong)*(byte *)(param_1 + 0xb48);
      }
      uVar6 = uVar6 + 1;
      pcVar7 = pcVar7 + 0x60;
    } while (uVar6 < uVar4);
  }
  return 0;
}


