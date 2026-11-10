/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fb0f0; name: FUN_001fb0f0
 */


undefined8 FUN_001fb0f0(long param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *local_70;
  char local_68;
  undefined1 auStack_58 [8];
  
  if (param_3 == (long *)0x0) {
    param_4 = (uint)*(ushort *)(param_1 + 0x30);
  }
  uVar3 = param_4 * 8;
  local_68 = 0x400 < uVar3;
  if (uVar3 < 0x401) {
    local_70 = auStack_58 + (-0x18 - ((ulong)uVar3 + 0xf & 0x1fffffff0));
  }
  else {
                    /* try { // try from 001fb144 to 001fb15b has its CatchHandler @ 001fb38c */
    local_70 = (undefined1 *)
               FUN_00401b30(auStack_58,uVar3,"./../../PhysX/src/NpRigidActorTemplate.h",0x1a5);
    if (local_70 == (undefined1 *)0x0) goto LAB_001fb344;
  }
  if (param_3 == (long *)0x0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    if (*(short *)(param_1 + 0x30) != 1) {
      puVar9 = (undefined8 *)*puVar9;
    }
    if (param_4 != 0) {
      uVar11 = 0;
      uVar8 = 0;
      do {
        puVar10 = local_70;
        lVar6 = puVar9[uVar11];
        uVar3 = *(uint *)(lVar6 + 0x38);
        pbVar2 = (byte *)(lVar6 + 0x90);
        if ((uVar3 & 0x40) != 0) {
          pbVar2 = (byte *)(*(long *)(lVar6 + 0x40) + 0x34);
        }
        if ((*pbVar2 & 5) != 0) {
          if ((*(uint *)(param_2 + 1) >> 3 & 1) != 0) {
            if ((uVar3 & 0xf000000) == 0x1000000) {
              if (uVar3 >> 0x1e == 1) goto LAB_001fb324;
            }
            else {
              lVar4 = param_2[2];
              if (lVar4 == 0) {
                    /* try { // try from 001fb2b0 to 001fb2b3 has its CatchHandler @ 001fb3a0 */
                lVar4 = FUN_001d1a00(*param_2,*(uint *)(param_2 + 1) >> 0x18 & 0xf);
                param_2[2] = lVar4;
                uVar3 = *(uint *)(lVar4 + 0x38);
              }
              else {
                uVar3 = *(uint *)(lVar4 + 0x38);
              }
              if (uVar3 != 0) {
                uVar5 = 0;
                do {
                  if (*(long *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) == lVar6 + 0x30)
                  goto LAB_001fb324;
                  uVar1 = (int)uVar5 + 1;
                  uVar5 = (ulong)uVar1;
                } while (uVar1 < uVar3);
              }
            }
          }
          *(long *)(puVar10 + uVar8 * 8) = lVar6 + 0x30;
          uVar8 = (ulong)((int)uVar8 + 1);
        }
LAB_001fb324:
        iVar7 = (int)uVar8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < param_4);
LAB_001fb330:
      if (iVar7 != 0) {
                    /* try { // try from 001fb338 to 001fb343 has its CatchHandler @ 001fb37c */
        FUN_002005f0(param_2,local_70,iVar7);
      }
    }
  }
  else if (param_4 != 0) {
    uVar11 = 0;
    uVar8 = 0;
    lVar4 = *param_3;
    uVar3 = *(uint *)(param_2 + 1);
    lVar6 = lVar4 + 0x30;
    puVar10 = local_70;
    if ((uVar3 >> 3 & 1) == 0) goto LAB_001fb210;
    do {
      puVar10 = local_70;
      if ((*(uint *)(lVar4 + 0x38) & 0xf000000) == 0x1000000) {
        if (*(uint *)(lVar4 + 0x38) >> 0x1e != 1) goto LAB_001fb210;
      }
      else {
        lVar4 = param_2[2];
        if (lVar4 == 0) {
                    /* try { // try from 001fb1e0 to 001fb1e3 has its CatchHandler @ 001fb3b0 */
          lVar4 = FUN_001d1a00(*param_2,uVar3 >> 0x18 & 0xf);
          param_2[2] = lVar4;
          uVar3 = *(uint *)(lVar4 + 0x38);
        }
        else {
          uVar3 = *(uint *)(lVar4 + 0x38);
        }
        if (uVar3 == 0) goto LAB_001fb210;
        uVar5 = 0;
        while (*(long *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) != lVar6) {
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar3 <= uVar1) goto LAB_001fb210;
        }
      }
      while( true ) {
        iVar7 = (int)uVar8;
        uVar11 = uVar11 + 1;
        if (param_4 <= uVar11) goto LAB_001fb330;
        lVar4 = param_3[uVar11];
        uVar3 = *(uint *)(param_2 + 1);
        lVar6 = lVar4 + 0x30;
        puVar10 = local_70;
        if ((uVar3 >> 3 & 1) != 0) break;
LAB_001fb210:
        *(long *)(puVar10 + uVar8 * 8) = lVar6;
        uVar8 = (ulong)((int)uVar8 + 1);
      }
    } while( true );
  }
LAB_001fb344:
  if (local_68 != '\0') {
                    /* try { // try from 001fb350 to 001fb357 has its CatchHandler @ 001fb39c */
    FUN_00401ce0(&local_70,local_70);
  }
  return 1;
}


