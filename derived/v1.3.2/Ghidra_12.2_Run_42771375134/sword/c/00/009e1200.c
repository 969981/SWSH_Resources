/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e1200; name: FUN_009e1200
 */


void FUN_009e1200(undefined4 param_1,undefined1 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_02718ad8;
  FUN_008df430(*(undefined8 *)(PTR_DAT_02718ad8 + 8),param_1);
  uVar3 = FUN_008e1680();
  uVar4 = FUN_008f35c0(*(undefined8 *)puVar1,0x4000);
  if (((uVar4 & 1) == 0) || (cVar2 = FUN_008fa070(*(undefined8 *)puVar1,param_1), cVar2 != '\x01'))
  {
    uVar4 = FUN_008f89c0(*(undefined8 *)puVar1,0x40);
    uVar5 = *(undefined8 *)(puVar1 + 0x10);
    if ((uVar4 & 1) == 0) {
      FUN_014c84c0(uVar5,param_2,uVar3);
      return;
    }
    lVar6 = *(long *)(*(long *)(puVar1 + 0x28) + 0x60);
    if (lVar6 == 0) goto LAB_009e1330;
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  else {
    uVar5 = *(undefined8 *)(puVar1 + 0x10);
    lVar6 = *(long *)(*(long *)(puVar1 + 0x28) + 0x60);
    if (lVar6 == 0) {
LAB_009e1330:
      FUN_014c8610(uVar5,param_2,0,0x16b);
      return;
    }
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  FUN_014c8610(uVar5,param_2,lVar6,0x16b);
                    /* WARNING: Could not recover jumptable at 0x009e12fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7);
  return;
}


