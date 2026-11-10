/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031dc60; name: FUN_0031dc60
 */


void FUN_0031dc60(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                 uint *param_5,long *param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  byte *__dest;
  void *__dest_00;
  uint uVar4;
  void *__src;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_180 [16];
  char *local_170 [2];
  undefined1 auStack_160 [256];
  
  *param_4 = 0x10;
  *param_3 = 0;
  *param_5 = 0;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_170);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (local_170[0] == (char *)0x0) goto LAB_0031e08c;
  *(int *)PTR_DAT_02712278 = *(int *)PTR_DAT_02712278 + 1;
  if (*local_170[0] == '\0') {
    __dest = &DAT_01d38550;
    uVar4 = (uint)DAT_01d38550;
    if (uVar4 != 0) goto LAB_0031dd20;
LAB_0031e05c:
    __src = (void *)0x0;
    uVar8 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar1 = uVar3 + 1;
      lVar6 = uVar3 + 1;
      uVar3 = uVar1;
    } while (local_170[0][lVar6] != '\0');
                    /* try { // try from 0031dcf4 to 0031dd13 has its CatchHandler @ 0031e0c8 */
    __dest = (byte *)(**(code **)(*param_6 + 0x10))(param_6,(int)uVar1 + 1);
    memcpy(__dest,local_170[0],uVar1 & 0xffffffff);
    __dest[uVar1 & 0xffffffff] = 0;
    uVar4 = (uint)*__dest;
    if (*__dest == 0) goto LAB_0031e05c;
LAB_0031dd20:
    uVar5 = 0;
    __src = (void *)0x0;
    uVar7 = 0;
    do {
      lVar6 = 1;
                    /* try { // try from 0031dd44 to 0031dd47 has its CatchHandler @ 0031e0f8 */
      while (iVar2 = isspace(uVar4), iVar2 != 0) {
        uVar4 = (uint)__dest[lVar6];
        lVar6 = lVar6 + 1;
        if (uVar4 == 0) {
          uVar8 = uVar7;
          goto LAB_0031e06c;
        }
      }
      if ((__dest != (byte *)0x0) && (uVar4 = (uint)*__dest, *__dest != 0)) goto LAB_0031dd68;
      uVar8 = uVar7 + 0x10;
      if (uVar5 < uVar8) {
        uVar4 = 0x20;
        do {
          uVar5 = uVar4;
          uVar4 = uVar5 << 1;
        } while (uVar5 < uVar8);
        __dest_00 = (void *)(**(code **)(*param_6 + 0x10))(param_6,uVar5);
        if (uVar7 != 0) {
          memcpy(__dest_00,__src,(ulong)uVar7);
        }
        (**(code **)(*param_6 + 0x18))(param_6,__src);
        __src = __dest_00;
      }
      memcpy((void *)((long)__src + (ulong)uVar7),auStack_180,0x10);
      uVar4 = (uint)*__dest;
      uVar7 = uVar8;
    } while (uVar4 != 0);
  }
LAB_0031e06c:
  *param_3 = __src;
  *param_5 = uVar8 >> 4;
                    /* try { // try from 0031e080 to 0031e08b has its CatchHandler @ 0031e0c0 */
  (**(code **)(*param_6 + 0x18))(param_6,__dest);
LAB_0031e08c:
                    /* try { // try from 0031e094 to 0031e09f has its CatchHandler @ 0031e0c4 */
  (**(code **)(*param_6 + 0x18))(param_6,0);
  return;
  while( true ) {
    __dest = __dest + 1;
    uVar4 = (uint)*__dest;
    if (uVar4 == 0) break;
LAB_0031dd68:
                    /* try { // try from 0031dd6c to 0031dd6f has its CatchHandler @ 0031e0f4 */
    iVar2 = isspace(uVar4);
    if (iVar2 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_160,0,0x100);
}


