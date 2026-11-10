/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aa550; name: FUN_009aa550
 */


void FUN_009aa550(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_90 [80];
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  FUN_0093b070(auStack_90);
  local_38 = auStack_90;
  FUN_00942450(param_1);
  uVar5 = FUN_00925910();
  FUN_00948da0(uVar5,auStack_40,&local_38);
  FUN_0093b2e0(auStack_90);
  lVar6 = FUN_0093b2f0(auStack_90);
  if (lVar6 != 0) {
    do {
      bVar1 = FUN_00942730(param_1,lVar6);
      if (((0xdb < bVar1) && (iVar2 = FUN_008e19f0(lVar6), iVar2 != 0)) &&
         (iVar3 = FUN_008ec900(0x14), iVar3 != 0)) {
        FUN_009aa640(param_1,lVar6,iVar2);
        uVar5 = FUN_009423b0(param_1);
        uVar4 = FUN_008e0a00(lVar6);
        FUN_0093a0c0(uVar5,uVar4,0);
      }
      lVar6 = FUN_0093b2f0(auStack_90);
    } while (lVar6 != 0);
  }
  return;
}


