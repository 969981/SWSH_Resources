/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073fc0; name: FUN_01073fc0
 */


void FUN_01073fc0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar5 = FUN_0106fdb0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  uVar6 = FUN_0106fe30(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  uVar2 = FUN_0106f4c0(**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
  if ((uVar2 & 0xff) != 0) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      while( true ) {
        iVar3 = FUN_0106f650(uVar9,**(undefined4 **)(*(long *)(param_1 + 0x5d0) + 0x60),
                             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
        uVar7 = FUN_0106f400(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60),iVar3);
        if (((uVar7 & 1) != 0) && ((iVar3 != 1 || (*(char *)(param_1 + 0x690) == '\0')))) break;
        uVar9 = uVar9 + 1;
        if ((uVar2 & 0xff) <= (uVar9 & 0xff)) {
          return;
        }
      }
      iVar4 = FUN_0106f480(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60));
      lVar8 = FUN_0106fd90((iVar4 + ~uVar10) - (uint)*(byte *)(param_1 + 0x690));
      bVar1 = FUN_0106f510(iVar3,*(undefined1 *)
                                  (*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      local_68 = *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x660);
      local_70 = FUN_0106feb0(iVar3);
      FUN_01074160(param_1,lVar8 + 8,&local_70,uVar5);
      local_70 = 0x331219739d78891b;
      FUN_01074280(param_1,lVar8 + 0x10,&local_68,&local_70,uVar6,uVar5);
      uVar10 = uVar10 + 1;
      uVar9 = uVar9 + 1;
    } while ((uVar9 & 0xff) < (uVar2 & 0xff));
  }
  return;
}


