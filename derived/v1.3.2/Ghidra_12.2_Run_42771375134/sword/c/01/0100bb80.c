/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100bb80; name: FUN_0100bb80
 */


void FUN_0100bb80(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined1 local_28 [4];
  int local_24;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 600);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_24 = 0;
  do {
    local_28[0] = 1;
    FUN_0151d150(lVar3,0,&local_24,local_28);
    bVar1 = local_24 < 0x27;
    local_24 = local_24 + 1;
  } while (bVar1);
  local_24 = 0;
  do {
    local_28[0] = 1;
    FUN_0151d150(lVar3,1,&local_24,local_28);
    bVar1 = local_24 < 0x27;
    local_24 = local_24 + 1;
  } while (bVar1);
  local_24 = 0;
  do {
    local_28[0] = 1;
    FUN_0151d150(lVar3,2,&local_24,local_28);
    iVar2 = local_24 + 1;
    bVar1 = local_24 < 0x27;
    local_24 = iVar2;
  } while (bVar1);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


