/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df460; name: FUN_008df460
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_008df460(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  iVar2 = FUN_00884820(*param_2);
  (**(code **)(*(long *)*param_2 + 0x70))();
  if (iVar2 != 0) {
    iVar4 = 0;
    lVar1 = param_1 + ((ulong)param_3 & 0xff) * 0x38 + 8;
    do {
      plVar5 = (long *)*param_2;
      if (plVar5 == (long *)0x0) {
        uVar3 = FUN_00914310(lVar1,iVar4);
        FUN_008e1c70(uVar3,1);
        FUN_008e1680(uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      plVar6 = plVar5 + 9;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar3 = FUN_00914310(lVar1,iVar4);
      FUN_008e1c70(uVar3,1);
      uVar3 = FUN_008e1680(uVar3);
      (**(code **)(*plVar5 + 0x28))(plVar5,uVar3);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  return;
}


