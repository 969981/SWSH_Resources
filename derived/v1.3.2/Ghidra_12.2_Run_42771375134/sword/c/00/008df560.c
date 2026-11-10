/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df560; name: FUN_008df560
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_008df560(long param_1,undefined8 *param_2,byte param_3,long param_4)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  
  uVar5 = FUN_00884820(*param_2);
  (**(code **)(*(long *)*param_2 + 0x70))();
  if (uVar5 != 0) {
    uVar8 = 0;
    lVar1 = param_1 + (ulong)param_3 * 0x38 + 8;
    do {
      cVar2 = FUN_009c9810(param_3,uVar8 & 0xffffffff);
      uVar9 = 0;
      do {
        uVar6 = FUN_00914310(lVar1,uVar9);
        cVar3 = FUN_008e0a00();
        if (cVar3 == cVar2) {
          plVar10 = (long *)*param_2;
          if (plVar10 == (long *)0x0) {
            uVar6 = FUN_00914310(lVar1,uVar9);
            FUN_008e1c70(uVar6,1);
            FUN_008e1680(uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          plVar11 = plVar10 + 9;
          (**(code **)(*plVar11 + 0x10))(plVar11);
          uVar7 = FUN_00914310(lVar1,uVar9);
          FUN_008e1c70(uVar7,1);
          uVar7 = FUN_008e1680(uVar7);
          (**(code **)(*plVar10 + 0x28))(plVar10,uVar7);
          (**(code **)(*plVar11 + 0x18))(plVar11);
          bVar4 = FUN_008e4c90(uVar6);
          *(byte *)(param_4 + uVar8) = bVar4 & 1;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  return;
}


