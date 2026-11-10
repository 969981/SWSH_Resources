/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120dcf0; name: FUN_0120dcf0
 */


void FUN_0120dcf0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar5 = *(undefined8 *)PTR_DAT_027104a0;
  lVar2 = FUN_007a8430(uVar5,*(undefined1 *)(param_1 + 0x7a78));
  if (lVar2 != 0) {
    uVar6 = 0;
    lVar7 = param_1 + 0xdf8;
    do {
      while ((((lVar3 = FUN_007a8430(uVar5,uVar6 & 0xffffffff), lVar3 != 0 &&
               (*(char *)(lVar7 + 0xd88) == '\0')) && (*(long *)(lVar7 + 0xd80) != 0)) &&
             ((*(short *)(lVar3 + 0x4e) == 0x303 && (iVar1 = FUN_01955c30(lVar2), iVar1 == 0xd80))))
            ) {
        *(undefined1 *)(lVar7 + 0xd88) = 1;
        if ((*(long *)(param_1 + 0x68) == 0) ||
           ((*(int *)(*(long *)(param_1 + 0x68) + 0x54) == 0 ||
            (puVar4 = *(undefined8 **)(param_1 + 0x70), puVar4 == (undefined8 *)0x0)))) break;
        (**(code **)*puVar4)(puVar4,*(undefined8 *)(lVar7 + 0xd80),uVar6 & 0xffffffff,lVar7);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0xd90;
        if (uVar6 == 8) {
          return;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0xd90;
    } while (uVar6 != 8);
  }
  return;
}


