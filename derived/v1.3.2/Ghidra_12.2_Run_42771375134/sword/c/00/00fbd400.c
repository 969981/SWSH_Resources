/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbd400; name: FUN_00fbd400
 */


void FUN_00fbd400(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  
  if (*(char *)(param_1 + 0x45) == '\0') {
    FUN_00fbd5f0();
    uVar2 = *(undefined8 *)PTR_DAT_02710958;
    FUN_01211d70(uVar2);
    lVar1 = FUN_01218d60();
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
      do {
        FUN_0121b120(lVar3,"Deleted",2);
        FUN_00fbdb60(param_1,lVar3);
        lVar3 = lVar3 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    FUN_01211d70(uVar2);
    lVar1 = FUN_01218d80();
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
      do {
        FUN_0121b120(lVar3,"Offline",2);
        FUN_00fbdb60(param_1,lVar3);
        lVar3 = lVar3 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    FUN_01211d70(uVar2);
    lVar1 = FUN_01218d50();
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
      do {
        FUN_01211890(&local_38,uVar2,lVar3);
        if (local_38 != 0) {
          FUN_01226090(local_38,"Created");
          FUN_00fbb800(param_1,local_38);
        }
        lVar3 = lVar3 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    FUN_01211d70(uVar2);
    lVar1 = FUN_01218d70();
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
      do {
        FUN_01211890(&local_38,uVar2,lVar3);
        if (local_38 != 0) {
          FUN_01226090(local_38,"Online");
          FUN_00fbb800(param_1,local_38);
        }
        lVar3 = lVar3 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    FUN_01211d70(uVar2);
    lVar1 = FUN_01218d40();
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48) * 0x28;
      do {
        FUN_01211890(&local_38,uVar2,lVar3);
        if (local_38 != 0) {
          FUN_00fbb800(param_1);
        }
        lVar3 = lVar3 + 0x28;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
  }
  return;
}


