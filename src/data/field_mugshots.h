static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_GrowlitheNormal[] = INCBIN_U32("graphics/field_mugshots/growlithe/normal.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheNormal[] = INCBIN_U16("graphics/field_mugshots/growlithe/normal.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheHappy[] = INCBIN_U32("graphics/field_mugshots/growlithe/happy.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheHappy[] = INCBIN_U16("graphics/field_mugshots/growlithe/happy.gbapal");
static const u32 sFieldMugshotGfx_GrowlithePain[] = INCBIN_U32("graphics/field_mugshots/growlithe/pain.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlithePain[] = INCBIN_U16("graphics/field_mugshots/growlithe/pain.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheAngry[] = INCBIN_U32("graphics/field_mugshots/growlithe/angry.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheAngry[] = INCBIN_U16("graphics/field_mugshots/growlithe/angry.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheWorried[] = INCBIN_U32("graphics/field_mugshots/growlithe/worried.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheWorried[] = INCBIN_U16("graphics/field_mugshots/growlithe/worried.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheSad[] = INCBIN_U32("graphics/field_mugshots/growlithe/sad.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheSad[] = INCBIN_U16("graphics/field_mugshots/growlithe/sad.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheCrying[] = INCBIN_U32("graphics/field_mugshots/growlithe/crying.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheCrying[] = INCBIN_U16("graphics/field_mugshots/growlithe/crying.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheShouting[] = INCBIN_U32("graphics/field_mugshots/growlithe/shouting.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheShouting[] = INCBIN_U16("graphics/field_mugshots/growlithe/shouting.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheTearyEyed[] = INCBIN_U32("graphics/field_mugshots/growlithe/teary_eyed.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheTearyEyed[] = INCBIN_U16("graphics/field_mugshots/growlithe/teary_eyed.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheDetermined[] = INCBIN_U32("graphics/field_mugshots/growlithe/determined.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheDetermined[] = INCBIN_U16("graphics/field_mugshots/growlithe/determined.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheJoyous[] = INCBIN_U32("graphics/field_mugshots/growlithe/joyous.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheJoyous[] = INCBIN_U16("graphics/field_mugshots/growlithe/joyous.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheInspired[] = INCBIN_U32("graphics/field_mugshots/growlithe/inspired.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheInspired[] = INCBIN_U16("graphics/field_mugshots/growlithe/inspired.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheSurprised[] = INCBIN_U32("graphics/field_mugshots/growlithe/surprised.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheSurprised[] = INCBIN_U16("graphics/field_mugshots/growlithe/surprised.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheDizzy[] = INCBIN_U32("graphics/field_mugshots/growlithe/dizzy.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheDizzy[] = INCBIN_U16("graphics/field_mugshots/growlithe/dizzy.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheSigh[] = INCBIN_U32("graphics/field_mugshots/growlithe/sigh.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheSigh[] = INCBIN_U16("graphics/field_mugshots/growlithe/sigh.gbapal");
static const u32 sFieldMugshotGfx_GrowlitheStunned[] = INCBIN_U32("graphics/field_mugshots/growlithe/stunned.4bpp.lz");
static const u16 sFieldMugshotPal_GrowlitheStunned[] = INCBIN_U16("graphics/field_mugshots/growlithe/stunned.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },
    [MUGSHOT_GROWLITHE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheNormal,
            .pal = sFieldMugshotPal_GrowlitheNormal,
        },
        [EMOTE_HAPPY] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheHappy,
            .pal = sFieldMugshotPal_GrowlitheHappy,
        },
        [EMOTE_PAIN] =
        {
            .gfx = sFieldMugshotGfx_GrowlithePain,
            .pal = sFieldMugshotPal_GrowlithePain,
        },
        [EMOTE_ANGRY] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheAngry,
            .pal = sFieldMugshotPal_GrowlitheAngry,
        },
        [EMOTE_WORRIED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheWorried,
            .pal = sFieldMugshotPal_GrowlitheWorried,
        },
        [EMOTE_SAD] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheSad,
            .pal = sFieldMugshotPal_GrowlitheSad,
        },
        [EMOTE_CRYING] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheCrying,
            .pal = sFieldMugshotPal_GrowlitheCrying,
        },
        [EMOTE_SHOUTING] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheShouting,
            .pal = sFieldMugshotPal_GrowlitheShouting,
        },
        [EMOTE_TEARY_EYED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheTearyEyed,
            .pal = sFieldMugshotPal_GrowlitheTearyEyed,
        },
        [EMOTE_DETERMINED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheDetermined,
            .pal = sFieldMugshotPal_GrowlitheDetermined,
        },
        [EMOTE_JOYOUS] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheJoyous,
            .pal = sFieldMugshotPal_GrowlitheJoyous,
        },
        [EMOTE_INSPIRED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheInspired,
            .pal = sFieldMugshotPal_GrowlitheInspired,
        },
        [EMOTE_SURPRISED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheSurprised,
            .pal = sFieldMugshotPal_GrowlitheSurprised,
        },
        [EMOTE_DIZZY] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheDizzy,
            .pal = sFieldMugshotPal_GrowlitheDizzy,
        },
        [EMOTE_SIGH] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheSigh,
            .pal = sFieldMugshotPal_GrowlitheSigh,
        },
        [EMOTE_STUNNED] =
        {
            .gfx = sFieldMugshotGfx_GrowlitheStunned,
            .pal = sFieldMugshotPal_GrowlitheStunned,
        },
    },
};
