/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006349b0; name: FUN_006349b0
 */


undefined8 FUN_006349b0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_30 [16];
  
  FUN_006966f0(auStack_30,param_1 + 0x18,1);
  iVar1 = FUN_005c3550(param_2);
  lVar4 = *(long *)(param_1 + 0x90);
  do {
    if (lVar4 == 0) {
      uVar3 = 0;
LAB_00634a1c:
      FUN_00696730(auStack_30);
      return uVar3;
    }
    if ((*(long *)(lVar4 + 0x20) != 0) &&
       (iVar2 = (**(code **)(*(long *)(*(long *)(lVar4 + 0x20) + 8) + 0x20))(), iVar2 == iVar1)) {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      goto LAB_00634a1c;
    }
    lVar4 = *(long *)(lVar4 + 8);
  } while( true );
}


