/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045c540; name: FUN_0045c540
 */


undefined8 FUN_0045c540(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *__src;
  ulong uVar6;
  size_t __n;
  
  lVar1 = param_2 + (ulong)(uint)(*(int *)(param_2 + 5) * 5);
  uVar2 = *(uint *)(lVar1 + 9);
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0xd);
  uVar4 = FUN_0045b710(param_1 + 0x18,lVar1 + 0xe,(ulong)uVar2);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  pbVar5 = (byte *)(lVar1 + 0xe + (ulong)uVar2);
  __src = pbVar5 + 1;
  bVar3 = *pbVar5;
  uVar6 = (ulong)bVar3;
  if (uVar6 == 0) {
LAB_0045c5f8:
    bVar3 = *__src;
    uVar6 = (ulong)bVar3;
    if (uVar6 != 0) {
      uVar2 = bVar3 + 4 & 0x1fc;
      pbVar5 = (byte *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)(uVar6 << 3));
      if (pbVar5 == (byte *)0x0) goto LAB_0045c658;
      *pbVar5 = bVar3;
      memcpy(pbVar5 + 1,__src + 1,uVar6);
      memcpy(pbVar5 + uVar2,__src + 1 + uVar6,uVar6 << 3);
      *(byte **)(param_1 + 0x38) = pbVar5;
    }
    uVar4 = 1;
  }
  else {
    uVar2 = bVar3 + 4 & 0x1fc;
    __n = uVar6 * 4;
    pbVar5 = (byte *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)__n);
    if (pbVar5 != (byte *)0x0) {
      *pbVar5 = bVar3;
      memcpy(pbVar5 + 1,__src,uVar6);
      memcpy(pbVar5 + uVar2,__src + uVar6,__n);
      __src = __src + uVar6 + __n;
      *(byte **)(param_1 + 0x30) = pbVar5;
      goto LAB_0045c5f8;
    }
LAB_0045c658:
    uVar4 = 2;
  }
  return uVar4;
}


